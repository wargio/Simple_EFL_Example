#ifndef __EFL_EXAMPLE_FONT_H__
#define __EFL_EXAMPLE_FONT_H__

#include "core.h"
#include "color.h"

typedef struct {
	Evas_Object *obj;
	Evas_Text_Style_Type type;
	Evas_Font_Size size;
}EFL_Font;

void create_text_obj(EFL_Core* core, EFL_Font *font, const char* path_font);
void create_text_obj(EFL_Core* core, EFL_Font *font, const char* path_font, int size);
void create_text_obj(EFL_Core* core, EFL_Font *font, const char* path_font, Evas_Text_Style_Type type);
void create_text_obj(EFL_Core* core, EFL_Font *font, const char* path_font, Evas_Text_Style_Type type, int size);

void write_text(EFL_Font *font, int x, int y, const char *message);
void write_text(EFL_Font *font, int x, int y, const char *message, EFL_Color color);

#endif
