//g++ d12.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o d12 `fltk-config --ldflags --use-images`

#include "Graph.h"
#include "Simple_window.h"
#include "GUI.h"


int main()

{

	using namespace Graph_lib;

	try
	{

	Point tl{100, 100};	//ablak balfelső sarka a képernyőn
	
	Simple_window win(tl,600, 400, "My window");  //ablak helye, mérete és neve

	Axis xa{Axis::x, Point(20, 350), 300,10, "x axis"};		//az x tengely
	//tengelyfekvésze, kezdőpontja, hossza, beszúrásainak száma, neve

	xa.set_color(Color::dark_blue);		//a tengely átszínezése


	Axis ya{Axis::y, Point(20, 350), 300,10, "y axis"};		//ytengely
	ya.label.set_color(Color::dark_red);	//a tengely feliratának a színe


	Function sinus{sin,0,100, Point(20,150),1000,50,50}; 	//szinus egyenes

	sinus.set_color(Color::cyan);		//sin egyens színe


	Polygon poly;					//polygon hozzáadása
	poly.add(Point{350,200});		//pontot adunk apolygonhoz
	poly.add(Point{250,280});
	poly.add(Point{400,300});

	poly.set_color(Color::red);		//a polygon körvonalát beszínezük
	poly.set_style(Line_style::dash);	//szagatott vonalra állítjuk a polygon körvonalát


	Rectangle r {Point{200,200}, 100, 50};	//téglalapot hozunk létre
	r.set_fill_color(Color::magenta);		//a téglalap belsejét színezzük be

	Closed_polyline poly_rect;		//zárt polinomot hozzunk létre
	poly_rect.add(Point{100,50});	//pontot adunk a zárt polinommhoz
	poly_rect.add(Point{200,50});
	poly_rect.add(Point{200,100});
	poly_rect.add(Point{100,100});
	poly_rect.add(Point{50,75});

	poly_rect.set_fill_color(Color::yellow);	//a z.poli. belsekét színezzük be

	poly.set_style(Line_style(Line_style::dash,4));
	poly_rect.set_style(Line_style(Line_style::dash,2));


	Text t {Point{150,150},"Hello graphical world"};

	t.set_font(Font::times_bold);	//betűtípus
	t.set_font_size(15);			//betűméret


	Image ii {Point{200,300}, "badge.jpg"};


	/*win.wait_for_button();
	ii.move (10,20);		//kép eltolása
*/

	Circle c {Point{150,250},50};	//kör
	Mark m {Point{150,200},'x'};	//pont

	win.attach(xa);		//rárakjuk a tengelyt az ablakra
	win.attach(ya);
	win.attach(sinus);
	win.attach(poly);
	win.attach(r);
	win.attach(poly_rect);
	win.attach(t);
	win.attach(ii);
	win.attach(c);
	win.attach(m);


	win.wait_for_button();
 
	}
	catch(exception& e) {
		return 1;

	}
	catch(...) {
		return 2;
	}
}