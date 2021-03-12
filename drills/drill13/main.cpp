/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"

int main()

{

	using namespace Graph_lib;

	Point tl {100,100};							//bal felső sarka az ablaknak

	Simple_window win(tl,800,1000,"Drill 13");	//ablak létrehozása


	int x_size = 800; 							//itt adjuk meg a rács szélességét
	int y_size = 800;							//itt adjuk meg a rács magasságát
	int x_grid = 100;							//itt adjuk meg a cella szélességét
	int y_grid = 100;							//itt adjuk meg a cella magasságát

	Lines grid;

	for (int x=x_grid; x<=x_size; x+=x_grid)
	grid.add(Point{x,0},Point{x,y_size}); 		// vertical line / függőleges vonalak
	


	for (int y = y_grid; y<=y_size; y+=y_grid)
	grid.add(Point{0,y},Point{x_size,y}); 		// horizontal line / vízszintes vonalak


	win.attach(grid);


	Vector_ref<Rectangle> rect;

	for(int i=0; i<x_size; i+=x_grid)
	{
		rect.push_back(new Rectangle{Point{i,i}, Point{i+x_grid,i+x_grid}});	//létrehoz egy új rectanglet 
        rect[rect.size() - 1].set_color(Color::invisible);						//a rectangle körvonalát láthatatlanná teszi
        rect[rect.size() - 1].set_fill_color(Color::red);						//beszínezi a rectangle belsejét pirosra
        win.attach(rect[rect.size() - 1]);										//megjeleníti a rectangeleket az ablakon

        //a következő rectangle mindig az ellöző jobb alsó sarkából fog indulni így csak egy átlóban fognak megjelenni a színezett rectangelek

	}

	Image kep1 {Point{0,300},"pac-ghost.jpg"};	
	Image kep2 {Point{100,600},"pac-ghost.jpg"};	
	Image kep3 {Point{500,200},"pac-ghost.jpg"};	

	win.attach(kep1);
	win.attach(kep2);
	win.attach(kep3);

	Image pac{Point{0,0},"pacman.jpg"};

	win.attach(pac);

	win.wait_for_button();

	int xszamlalo=0;
	int yszamlalo=0;


	

		for(int i=0; i<10;i++)
		{
		
		

			if (xszamlalo==7)
			{
				pac.move(-700,100);
				xszamlalo=0;
				yszamlalo++;
			
				if (yszamlalo==7)
				{
					pac.move(0,-700);
					yszamlalo=0;
					xszamlalo=0;
				}
			}
			else 
			{
			pac.move(100,0);
			xszamlalo++;
			}
				
			win.wait_for_button();

		}

	

	win.wait_for_button();
}