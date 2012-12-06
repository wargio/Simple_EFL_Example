#ifndef __EFL_EXAMPLE_EDJE_H__
#define __EFL_EXAMPLE_EDJE_H__

#include "core.h"

#include <Edje.h>

typedef struct{
	Evas_Object *obj;
	uint16_t width;
	uint16_t height;
}EFL_Edj;


void edje_start();
void edje_stop();

void load_edj_from_file(EFL_Core* core, EFL_Edj *edj, const char *path_edj, const char* main_label_name, int height, int width);
void override_text(EFL_Edj *edj, const char* text_label_name,const char* message);
void draw_edj(EFL_Edj *edj, int x, int y);
void delete_edj(EFL_Edj *edj);


#endif
