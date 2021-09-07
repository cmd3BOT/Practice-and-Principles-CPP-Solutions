#include "Smiley.h"
#include "Graph.h"
#include <cmath>
#include <iostream>
#include <math.h>

namespace Graph_lib {
	// Smiley::Smiley() is same as Smiley::Smiley(): Circle() // default constructor
	// base class Circle is not abstract so it must be constructed
	Smiley::Smiley(Point center, int rr) : Circle::Circle(center, rr) {}

	// override 
	void Smiley::draw_lines() const {
		// face
		Circle::draw_lines();

		// smile
		fl_arc(Circle::center().x - smile_radius, Circle::center().y - smile_radius, 2*smile_radius, 2*smile_radius, 200, 340);

		// eyes

		// left eye
		int x_displace = eye_distance * cos(eye_angle);
		int y_displace = eye_distance * sin(eye_angle);

		Point left_eye_center{ Circle::center().x - x_displace, Circle::center().y - y_displace };
		Circle c1{left_eye_center, int(eye_radius)};
		c1.draw_lines();

		// right eye
		Point right_eye_center{ Circle::center().x + x_displace, Circle::center().y - y_displace };
		Circle c2{ right_eye_center, int(eye_radius) };
		c2.draw_lines();
	}
};