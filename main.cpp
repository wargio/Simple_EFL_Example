#include "core.h"
#include "font.h"
#include "image.h"
#include "edje.h"

#define HEIGHT		480
#define WIDTH		720

int main(){

//	Evas_Object *bg;
	EFL_Core core;
	EFL_Edj edj;
//	EFL_Color red = {0xff,0,0,0xff}; //rgba
//	EFL_Font visitor;
//	EFL_Image elem;	

	init_core(&core, WIDTH, HEIGHT, "EFL Test");
	edje_start();


	load_edj_from_file(&core, &edj, "edje_example.edj", "my_group",720,480);
	
	draw_edj(&edj, 0, 0);
/*
	bg = evas_object_rectangle_add(get_main_object(&core));
	evas_object_resize(bg, WIDTH, HEIGHT);
	evas_object_color_set(bg, 205, 234, 155, 255);
	evas_object_show(bg);
	ecore_evas_object_associate(core.ee_core, bg, ECORE_EVAS_OBJECT_ASSOCIATE_BASE);



	create_image_obj(&core,&elem,"elementary.png",128,128);
	draw_image(&elem, WIDTH/2-128/2, HEIGHT/2-128/2);

	create_text_obj(&core, &visitor, "visitor.ttf", 30);
	write_text(&visitor, 20,20, "simple text and image test with efl libs", red);
*/


	start_core_loop();
	
	delete_edj(&edj);
	
	edje_stop();
	stop_core(&core);
	
	return 0;
}
