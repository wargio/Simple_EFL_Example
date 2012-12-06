#ifndef __EFL_EXAMPLE_CORE_H__
#define __EFL_EXAMPLE_CORE_H__

#include <Ecore.h>
#include <Ecore_Evas.h>
#include <stdint.h>

typedef struct {
	Ecore_Evas *ee_core;
	uint16_t width;
	uint16_t height;
}EFL_Core;


void init_core(EFL_Core *core, uint16_t width, uint16_t height, const char *APP);
void start_core_loop();
void stop_core(EFL_Core *core);

Evas *get_main_object(EFL_Core *core);
void delete_obj(Evas_Object *obj);

#endif
