#include "core.h"

void init_core(EFL_Core *core, uint16_t width, uint16_t height, const char *APP){
	ecore_evas_init();
	core->ee_core = ecore_evas_new(NULL, 0, 0, width, height, NULL);
	ecore_evas_title_set(core->ee_core, APP);
	ecore_evas_show(core->ee_core);
	core->width = width;
	core->width = height;
	
}

Evas *get_main_object(EFL_Core *core){
	return ecore_evas_get(core->ee_core);
}

void start_core_loop(){
	ecore_main_loop_begin();
}

void stop_core(EFL_Core *core){
	ecore_evas_free(core->ee_core);
	ecore_evas_shutdown();
}

void delete_obj(Evas_Object *obj){
	evas_object_del(obj);
}
