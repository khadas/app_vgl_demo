#include <time.h>
#include <lvgl/lvgl.h>

#include "main.h"
#include "setting_ui.h"
#include "ui_resource.h"

#include "ui_intercom_homepage.h"
#include "smart_home_ui.h"
#include "furniture_control_ui.h"

static lv_obj_t *scr = NULL;
static lv_obj_t *bg_pic;
static lv_obj_t *ui_label_time;
static lv_obj_t *ui_label_date;
static lv_obj_t *ui_wifi;
static lv_timer_t *timer_date;

static lv_obj_t *main = NULL;
static lv_obj_t *ui_box_main = NULL;
static lv_obj_t *ui_smart_home;
static lv_obj_t *ui_furniture_control;
static lv_obj_t *ui_phone;
static lv_obj_t *ui_setting;
static lv_obj_t *ui_logo;
static lv_img_dsc_t *bg_snapshot;

static void page_switch(lv_event_t *e);

static struct btn_desc home_btn[] =
{
    {
        &ui_smart_home,
        IMG_SMART_HOME,
        "智能家居",
        {0, 0, 1, 1},
        common_draw,
        page_switch,
        smart_home_ui_init
    },
    {
        &ui_furniture_control,
        IMG_FURNITURE,
        "家居显控",
        {1, 0, 2, 1},
        common_draw,
        page_switch,
        furniture_control_ui_init
    },
    {
        &ui_phone,
        IMG_PHONE,
        "楼宇对讲",
        {0, 1, 1, 2},
        common_draw,
        page_switch,
        intercom_homepage_ui_init
    },
    {
        &ui_setting,
        IMG_SETTING,
        "系统设置",
        {1, 1, 2, 2},
        common_draw,
        page_switch,
        setting_ui_init
    }
};

static lv_coord_t col_dsc[] = {200, 200, LV_GRID_TEMPLATE_LAST};
static lv_coord_t row_dsc[] = {200, 200, LV_GRID_TEMPLATE_LAST};

struct btn_matrix_desc home_desc = {
    .col_dsc = col_dsc,
    .row_dsc = row_dsc,
    .pad = 5,
    .gap = 88,
    .desc = home_btn,
    .btn_cnt = sizeof(home_btn) / sizeof(home_btn[0]),
};

static void page_switch(lv_event_t *e)
{
    void (*func)(void) = lv_event_get_user_data(e);

    if (func)
    {
        func();
        lv_timer_del(timer_date);
        lv_obj_del(main);
        main = NULL;
    }
}

static void date_update(lv_timer_t *timer)
{
    time_t time_ptr;
    struct tm *tim;

    time(&time_ptr);
    tim = localtime(&time_ptr);
    lv_label_set_text_fmt(ui_label_time, "%02d:%02d",
                          tim->tm_hour, tim->tm_min);
    lv_label_set_text_fmt(ui_label_date, "%04d-%02d-%02d",
                          tim->tm_year + 1900, tim->tm_mon + 1, tim->tm_mday);
    lv_obj_align(ui_label_time, LV_ALIGN_TOP_LEFT, 50, 50);
    lv_obj_align_to(ui_label_date, ui_label_time, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 0);

#ifdef RK_DEMO_USEING_WIFI
    if (wifi_connected() == RK_WIFI_State_CONNECTED)
    {
        lv_img_set_src(ui_wifi, IMG_WIFI_ON);
    }
    else
    {
        lv_img_set_src(ui_wifi, IMG_WIFI_OFF);
    }
#endif
}

void home_ui_init(void)
{
    if (main)
        return;

    main = lv_obj_create(lv_scr_act());
    lv_obj_remove_style_all(main);
    lv_obj_set_style_pad_all(main, 10, LV_PART_MAIN);
    lv_obj_set_size(main, lv_pct(100), lv_pct(100));
    lv_obj_refr_size(main);

    ui_box_main = ui_btnmatrix_create(main, &home_desc);
    lv_obj_center(ui_box_main);

    ui_logo = lv_img_create(main);
    lv_img_set_src(ui_logo, IMG_RK_LOGO);
    lv_obj_align(ui_logo, LV_ALIGN_BOTTOM_RIGHT, -10, -10);

    ui_wifi = lv_img_create(main);
    lv_img_set_src(ui_wifi, IMG_WIFI_OFF);
    lv_obj_align(ui_wifi, LV_ALIGN_TOP_RIGHT, -10, 10);

    ui_label_time = lv_label_create(main);
    lv_obj_set_width(ui_label_time, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_label_time, LV_SIZE_CONTENT);
    lv_obj_align(ui_label_time, LV_ALIGN_TOP_LEFT, 0, 0);
    lv_obj_add_style(ui_label_time, &style_txt_l, LV_PART_MAIN);

    ui_label_date = lv_label_create(main);
    lv_obj_set_width(ui_label_date, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_label_date, LV_SIZE_CONTENT);
    lv_obj_align_to(ui_label_date, ui_label_time, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 0);
    lv_obj_add_style(ui_label_date, &style_txt_m, LV_PART_MAIN);

    date_update(NULL);
    timer_date = lv_timer_create(date_update, 1000, NULL);
    lv_timer_enable(timer_date);
}

lv_img_dsc_t *get_bg_snapshot(void)
{
    return bg_snapshot;
}

void bg_pic_snapshot_blur(void)
{
    lv_draw_rect_dsc_t dsc;

    bg_snapshot = lv_snapshot_take(bg_pic, LV_IMG_CF_TRUE_COLOR);
    if (!bg_snapshot)
    {
        printf("snapshot take failed\n");
        return;
    }

    lv_obj_t *canvas = lv_canvas_create(NULL);
    lv_area_t area;
    lv_canvas_set_buffer(canvas, (void *)bg_snapshot->data,
                         bg_snapshot->header.w,
                         bg_snapshot->header.h,
                         bg_snapshot->header.cf);
    area.x1 = 0;
    area.y1 = 0;
    area.x2 = bg_snapshot->header.w - 1;
    area.y2 = bg_snapshot->header.h - 1;
    lv_canvas_blur_ver(canvas, &area, 100);
    lv_canvas_blur_hor(canvas, &area, 100);
    lv_draw_rect_dsc_init(&dsc);
    dsc.bg_opa = 70;
    dsc.bg_color = lv_color_black();
    lv_canvas_draw_rect(canvas, 0, 0,
                        bg_snapshot->header.w,
                        bg_snapshot->header.h, &dsc);
    lv_obj_del(canvas);
}

void rk_demo_init(void)
{
    lv_obj_t * mask;

    scr = lv_obj_create(NULL);
    lv_obj_remove_style_all(scr);
    lv_obj_clear_flag(scr, LV_OBJ_FLAG_SCROLLABLE);

    bg_pic = lv_img_create(scr);
    lv_obj_remove_style_all(bg_pic);
    lv_obj_set_size(bg_pic, lv_pct(100), lv_pct(100));
    lv_img_set_src(bg_pic, MAIN_BG_PIC);

    mask = lv_obj_create(bg_pic);
    lv_obj_remove_style_all(mask);
    lv_obj_set_size(bg_pic, lv_pct(100), lv_pct(100));
    lv_obj_set_style_bg_color(bg_pic, lv_color_white(), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(bg_pic, LV_OPA_40, LV_PART_MAIN);

    bg_pic_snapshot_blur();

    lv_disp_load_scr(scr);

    home_ui_init();
}

void rk_demo_bg_hide(void)
{
    if (bg_pic)
        lv_obj_add_flag(bg_pic, LV_OBJ_FLAG_HIDDEN);
}

void rk_demo_bg_show(void)
{
    if (bg_pic)
        lv_obj_clear_flag(bg_pic, LV_OBJ_FLAG_HIDDEN);
}

