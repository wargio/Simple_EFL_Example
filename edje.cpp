#include "edje.h"

void edje_start(){
	edje_init();
}

void edje_stop(){
	edje_shutdown();
}

void load_edj_from_file(EFL_Core* core, EFL_Edj *edj, const char *path_edj, const char* main_label_name, int height, int width){
	edj->obj = edje_object_add(get_main_object(core));
	edje_object_file_set(edj->obj, path_edj, main_label_name);
	edj->height = height;
	edj->width  = width;
}

void override_text(EFL_Edj *edj, const char* text_label_name,const char* message){
	edje_object_part_text_set(edj->obj, text_label_name, message);
}

void draw_edj(EFL_Edj *edj, int x, int y){
	evas_object_move(edj->obj, x, y);
	evas_object_resize(edj->obj, edj->height, edj->width);
	evas_object_show(edj->obj);
}

void delete_edj(EFL_Edj *edj){
	delete_obj(edj->obj);
}

