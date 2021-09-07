#include <stdexcept>
#include <string>
#include <vector>
#include "Simple_window.h"
#include "Graph.h"
#include "Striped_Rectangle.h"
#include "Striped_Circle.h"


int main() {
	using namespace  Graph_lib;
	Graph_lib::Point tl{ 100, 100 }; // top left corner. Window position on screen
	Simple_window win{ tl, 600, 400, "Canvas" };

	Striped_Rectangle sr{ {100, 100}, 120, 100, Line_style{Line_style::dot, 1}, Color::dark_cyan, 1};
	Striped_Circle s_cr{ {300, 200}, 200, 1, Line_style{Line_style::solid, 1}, Color::dark_blue};
	win.attach(s_cr);
	win.attach(sr);

	win.set_label("Canvas");
	win.wait_for_button(); // display to screen
}