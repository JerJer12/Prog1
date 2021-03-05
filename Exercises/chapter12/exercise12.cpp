#include "Graph.h"
#include "Simple_window.h"
#include "GUI.h"


int main()

{

	using namespace Graph_lib;

	try
	{

	Point tl{100, 100};	//ablak balfelső sarka a képernyőn
	
	Simple_window win(tl,600, 400, "Exercises");  //ablak helye, mérete és neve

	//1.
/*
	Rectangle r {Point{100,100},100,50};
	r.set_color(Color::blue);

	Polygon poly;
	poly.add(Point{250,100});
	poly.add(Point{250,150});
	poly.add(Point{350,150});
	poly.add(Point{350,100});

	poly.set_color(Color::red);


	win.attach(r);
	win.attach(poly);
*/
//_________________________________________________________________________________
	//2
/*
	Rectangle re{Point{100,100},100,30};

	Text t{Point{125,120},"Howdy!"};

	win.attach(re);
	win.attach(t);

*/
//_________________________________________________________________________________
	//3
/*
	Polygon t1;
	t1.add(Point{80,100});
	t1.add(Point{170,100});
	t1.add(Point{170,110});
	t1.add(Point{130,110});
	t1.add(Point{130,250});
	t1.add(Point{120,250});
	t1.add(Point{120,110});
	t1.add(Point{80,110});

	Polygon b;
	b.add(Point{200,100});
	b.add(Point{280,100});
	b.add(Point{300,120});
	b.add(Point{300,130});
	b.add(Point{290,150});
	b.add(Point{310,170});
	b.add(Point{310,220});
	b.add(Point{280,250});
	b.add(Point{200,250});


	Polygon b1;
	b1.add(Point{230,115});
	b1.add(Point{260,115});
	b1.add(Point{270,120});
	b1.add(Point{270,140});
	b1.add(Point{260,150});
	b1.add(Point{230,150});


	Polygon b2;
	b2.add(Point{230,170});
	b2.add(Point{270,170});
	b2.add(Point{290,180});
	b2.add(Point{290,215});
	b2.add(Point{260,230});
	b2.add(Point{230,230});

	t1.set_style(Line_style(Line_style::solid,5));
	b.set_style(Line_style(Line_style::solid,5));
	b1.set_style(Line_style(Line_style::solid,5));
	b2.set_style(Line_style(Line_style::solid,5));


	win.attach(t1);
	win.attach(b);
	win.attach(b1);
	win.attach(b2);
	
*/
//_________________________________________________________________________________
	//4
/*
	Rectangle n1{Point{100,100},50,50};
	Rectangle n2{Point{150,100},50,50};
	Rectangle n3{Point{200,100},50,50};
	Rectangle n4{Point{100,150},50,50};
	Rectangle n5{Point{150,150},50,50};
	Rectangle n6{Point{200,150},50,50};
	Rectangle n7{Point{100,200},50,50};
	Rectangle n8{Point{150,200},50,50};
	Rectangle n9{Point{200,200},50,50};

	n1.set_fill_color(Color::white);
	n2.set_fill_color(Color::red);
	n3.set_fill_color(Color::white);
	n4.set_fill_color(Color::red);
	n5.set_fill_color(Color::white);
	n6.set_fill_color(Color::red);
	n7.set_fill_color(Color::white);
	n8.set_fill_color(Color::red);
	n9.set_fill_color(Color::white);

	win.attach(n1);
	win.attach(n2);
	win.attach(n3);
	win.attach(n4);
	win.attach(n5);
	win.attach(n6);
	win.attach(n7);
	win.attach(n8);
	win.attach(n9);
*/




//_________________________________________________________________________________

	//5
/*
	Rectangle bigb{Point{50,50},400,300};

	bigb.set_style(Line_style(Line_style::solid,24));

	win.attach(bigb);
*/

//_________________________________________________________________________________

	//6

	//a)
/*
	Rectangle biggerb{Point(100,100),800,800};

	win.attach(biggerb);
*/

	//b)
/*
	Simple_window bigwin(tl,2000,2000,"Big window");

	bigwin.wait_for_button();
*/
//_________________________________________________________________________________

	//7
/*
	Rectangle house{Point{250,250},150,150};
	Rectangle door{Point{315,325},25,75};
	Rectangle w1{Point{270,280},30,30};
	Rectangle w2{Point{350,280},30,30};
	Rectangle kem{Point{260,190},25,50};

	Polygon teto;
	teto.add(Point{250,250});
	teto.add(Point{400,250});
	teto.add(Point{325,175});

	Circle nap{Point{100,60},40};

	Polygon fust;
	fust.add(Point{260,190});
	fust.add(Point{250,180});
	fust.add(Point{255,175});
	fust.add(Point{250,170});
	fust.add(Point{255,165});
	fust.add(Point{255,160});
	fust.add(Point{250,145});
	fust.add(Point{250,150});
	fust.add(Point{245,145});
	fust.add(Point{250,140});
	fust.add(Point{255,115});
	fust.add(Point{250,100});
	fust.add(Point{255,110});
	fust.add(Point{270,145});		
	fust.add(Point{275,150});
	fust.add(Point{270,155});
	fust.add(Point{260,160});
	fust.add(Point{270,165});
	fust.add(Point{275,170});
	fust.add(Point{270,175});
	fust.add(Point{275,180});
	fust.add(Point{280,190});
	

	house.set_fill_color(Color::dark_yellow);
	door.set_fill_color(Color::dark_red);
	w1.set_fill_color(Color::blue);
	w2.set_fill_color(Color::blue);
	fust.set_fill_color(Color::white);
	kem.set_fill_color(Color::dark_red);
	teto.set_fill_color(Color::red);
	nap.set_fill_color(Color::yellow);



	win.attach(house);
	win.attach(door);
	win.attach(w1);
	win.attach(w2);
	win.attach(fust);
	win.attach(kem);
	win.attach(teto);
	win.attach(nap);
*/
//_________________________________________________________________________________

	//8
/*
	Circle kek{Point{50,100},50};
	Circle sar{Point{110,140},50};
	Circle fek{Point{170,100},50};
	Circle zol{Point{230,140},50};
	Circle pir{Point{290,100},50};

	kek.set_color(Color::blue);
	sar.set_color(Color::yellow);
	fek.set_color(Color::black);
	zol.set_color(Color::green);
	pir.set_color(Color::red);

	kek.set_style(Line_style(Line_style::solid,5));
	sar.set_style(Line_style(Line_style::solid,5));
	fek.set_style(Line_style(Line_style::solid,5));
	zol.set_style(Line_style(Line_style::solid,5));
	pir.set_style(Line_style(Line_style::solid,5));


	win.attach(kek);
	win.attach(sar);
	win.attach(fek);
	win.attach(zol);
	win.attach(pir);


*/

//_________________________________________________________________________________

	//9
/*
	Image badge{Point{100,100},"badge.jpg"};

	ostringstream oss;
	oss << "Badge";

	Text felirat {Point{100,20},oss.str()};

	win.set_label("Badge");


	win.attach(badge);
	win.attach(felirat);

*/

//_________________________________________________________________________________

	//10



//_________________________________________________________________________________
	win.wait_for_button();
 
	}
	catch(exception& e) {
		return 1;

	}
	catch(...) {
		return 2;
	}
}