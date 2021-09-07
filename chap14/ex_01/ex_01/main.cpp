#include <stdexcept>
#include <string>
#include <vector>
#include "Simple_window.h"
#include "Graph.h"
#include "Smiley.h"
#include "Hat_Smiley.h"


int main() {
	using namespace  Graph_lib;
	Graph_lib::Point tl{ 100, 100 }; // top left corner. Window position on screen
	Simple_window win{ tl, 600, 400, "Canvas" };

	//Graph_lib::Smiley smiley{ {300, 200}, 150 };
	Hat_Smiley smiley{ {300, 200}, 50 };

	win.attach(smiley);

	win.set_label("Canvas");
	win.wait_for_button(); // display to screen
}