#ifndef __EFL_EXAMPLE_IMAGE_H__
#define __EFL_EXAMPLE_IMAGE_H__

#include "core.h"

typedef struct {
	Evas_Object *obj;
	uint16_t width;
	uint16_t height;
}EFL_Image;

void create_image_obj(EFL_Core *core, EFL_Image *img, const char* path_image, int img_width, int img_height);
void draw_image(EFL_Image *img, int x, int y);
void draw_image(EFL_Image *img, int x, int y, int resize_w, int resize_h);

#endif
