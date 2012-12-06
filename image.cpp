#include "image.h"

void create_image_obj(EFL_Core *core, EFL_Image *img, const char* path_image, int img_width, int img_height){
	img->obj = evas_object_image_add(get_main_object(core));
	evas_object_image_file_set(img->obj, path_image, NULL);
	evas_object_image_preload(img->obj, EINA_TRUE);
	img->width  = img_width;
	img->height = img_height;
}

void draw_image(EFL_Image *img, int x, int y){
	evas_object_move(img->obj, x, y);
	evas_object_image_fill_set(img->obj, 0, 0, img->width, img->height);
	evas_object_resize(img->obj, img->width, img->height);
	evas_object_show(img->obj);
}

void draw_image(EFL_Image *img, int x, int y, int resize_w, int resize_h){
	evas_object_move(img->obj, x, y);
	evas_object_image_fill_set(img->obj, 0, 0, resize_w, resize_h);
	evas_object_resize(img->obj, resize_w, resize_h);
	evas_object_show(img->obj);
}
