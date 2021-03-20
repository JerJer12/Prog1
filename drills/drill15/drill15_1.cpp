/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"


double one(double x) { return 1; }

double slope(double x) { return x/2; }

double square(double x) { return x*x; }

double sloping_cos(double x) {return cos(x) + slope(x);}	//egy cosinust helyez a slope függvényre


int main()
{

	using namespace Graph_lib;

	Point tl {100,100};		//ablak balfelső sarka

	Simple_window win(tl,600,600,"Function graphs");

	constexpr int xmax=600;
	constexpr int ymax=600;

	Point origo{ymax/2,ymax/2};		//origo helye


	Axis x{Axis::x,Point{100,300},400,20,"1 == 20 pixels"};
		//Orientáció, kezdőpont, hossza, bemetszések hossza, megnevezése

	Axis y{Axis::y,Point{300,500},400,20,"1 == 20 pixels"};
						//az y tengely alulról rajzolodik felfele


	x.set_color(Color::red);
	y.set_color(Color::red);

	win.attach(x);
	win.attach(y);


	constexpr int range_b = -10;	//range beginning / range eleje 
	constexpr int range_e = 10;		//range end / range vége
	constexpr int n_points = 400; 	//pontok száma (amiket a függvény használ)
	constexpr int x_scale = 20;		//az x scale nagysága
	constexpr int y_scale = 20;		//az y scale nagysága

	Function fone(one, range_b, range_e, origo, n_points, x_scale, y_scale);	//egyenes
		//függvény, range eleje, range vége, origo(kiindulásipont), pontok száma (amiket használ, x scale, y scale) 

	Function fslope(slope, range_b, range_e, origo, n_points, x_scale, y_scale);	//meredek
	Function fsquare(square, range_b, range_e, origo, n_points, x_scale, y_scale);	//négyzetes
	Function fcos(cos, range_b, range_e, origo, n_points, x_scale, y_scale);		//cosinus
	Function fslope_cos(sloping_cos, range_b, range_e, origo, n_points, x_scale, y_scale);		//cosinus a slope-on


	Text slope_t{Point{100,380},"x/2"};		//"x/2" felirat 
	fcos.set_color(Color::blue);			//cosinus kékre színezése

	win.attach(fone);
	win.attach(fslope);
	win.attach(fsquare);
	win.attach(slope_t);
	win.attach(fcos);
	win.attach(fslope_cos);


	win.wait_for_button();

}
