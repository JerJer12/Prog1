#include "Lines_window.h"
#include "GUI.h"
#include "Graph.h"

Lines_window::Lines_window(Point xy, int w, int h, const string& title)
  : Window{xy, w, h, title},
    next_button{
        Point{x_max() - 300, 0}, 150, 40, "Next point",
        [](Address, Address pw) { reference_to<Lines_window>(pw).next(); }},
    quit_button{
        Point{x_max() - 150, 0}, 150, 40, "Quit",
        [](Address, Address pw) { reference_to<Lines_window>(pw).quit(); }},
    next_x{Point{300, 0}, 50, 40, "next x:"},
    next_y{Point{450, 0}, 50, 40, "next y:"}, xy_out{Point{100, 0}, 100, 40,
                                                     "current (x,y):"},
    color_menu({x_max() - 150, 40}, 150, 40, Menu::vertical, "Colors"), //color menu
    //példa: gomb(Point xy,int w, int h, Kind kk, const string &label) 
            //gomb(balfelső sarka, szélesség, magasság, horizontal vagy vertical,neve)
    select_color({x_max() - 150, 40}, 150, 40, "Select Color",
                 [](Address, Address pw) {
                     reference_to<Lines_window>(pw).select_color_pressed();
                 }),
    style_menu({x_max() - 300, 40}, 150, 40, Menu::vertical, "Styles"),     //style menu
    select_style({x_max() - 300, 40}, 150, 40, "Select Style",
                 [](Address, Address pw) {
                     reference_to<Lines_window>(pw).select_style_pressed();
                 })
    {

    attach(next_button);
    attach(quit_button);
    attach(next_x);
    attach(next_y);
    attach(xy_out);
    attach(lines);

     color_menu.attach(new Button({0, 0}, 0, 0, "Red", [](Address, Address pw)       //red color menu felhelyezése az ablakra
    {
         reference_to<Lines_window>(pw).red_pressed();
     }));
     color_menu.attach(new Button({0, 0}, 0, 0, "Blue", [](Address, Address          //blue -//-
     pw) {
         reference_to<Lines_window>(pw).blue_pressed();
     }));
     color_menu.attach(
         new Button({0, 0}, 0, 0, "Black", [](Address, Address pw) {                 //black -//-
             reference_to<Lines_window>(pw).black_pressed();
         }));
     attach(color_menu);          //color menu felhelyezése az ablakra
     color_menu.hide();           //color menu elrejtése
    attach(select_color);

     style_menu.attach(
         new Button({0, 0}, 0, 0, "Solid", [](Address, Address pw) {
             reference_to<Lines_window>(pw).solid_pressed();
         }));

     style_menu.attach(new Button({0, 0}, 0, 0, "Dot", [](Address, Address pw)//callback függvény
     {
         reference_to<Lines_window>(pw).dot_pressed();  //ami történik, ha megnyomodik a gomb
     }));
     attach(style_menu);
     style_menu.hide();
    attach(select_style);
    
}

void Lines_window::change_color(Color c) {          //meghívja a Lines_window.h-ból a függvényeket és definiálaja
    lines.set_color(c);
}

void Lines_window::red_pressed() {                  // -//- a színekre
    change_color(Color::red);                       //pirosra vált
    color_pressed();
    redraw();           //újra rajzolja az ablakot
}

void Lines_window::blue_pressed() {
    change_color(Color::blue);                      
    color_pressed();
    redraw();
}

void Lines_window::black_pressed() {
    change_color(Color::black);
    color_pressed();
    redraw();
}

void Lines_window::select_color_pressed() {     //meghívja a select_color_pressed függvéynt a LInes_window.h- ból és definiálja
    select_color.hide();        //elrejti a select_colort
    color_menu.show();          //előhozza / megmutatja a color_menut
}

void Lines_window::color_pressed() {
    color_menu.hide();
    select_color.show();
}

void Lines_window::change_style(Line_style ls) {
    lines.set_style(ls);
}

void Lines_window::solid_pressed() {
    change_style(Line_style::solid);
    style_pressed();
    redraw();
}

void Lines_window::dot_pressed() {
    change_style(Line_style::dot);
    style_pressed();
    redraw();
}

void Lines_window::select_style_pressed() {
    select_style.hide();
    style_menu.show();
    
}

void Lines_window::style_pressed() {
    style_menu.hide();
    select_style.show();
}


void Lines_window::quit() {
    hide();
}

void Lines_window::next() {
    int x = next_x.get_int();
    int y = next_y.get_int();

    lines.add(Point{x, y});

    ostringstream ss;
    ss << '(' << x << ',' << y << ')';
    xy_out.put(ss.str());

    redraw();
}
