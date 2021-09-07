#pragma once
#define _USE_MATH_DEFINES
#include "Striped_Circle.h"
#include <math.h>

namespace Graph_lib {
	Striped_Circle::Striped_Circle(Point center, int radius, double d_theta, Line_style lst, Color col):
		Circle::Circle(center, radius), stripe_style{ lst }, col{ col }, d_theta{d_theta} {}
	Striped_Circle::Striped_Circle(Point center, int radius) : Circle::Circle(center, radius) {}

	void Striped_Circle::draw_lines() const {
		Circle::draw_lines();

		//double limit = 90;
		for (double angle = 90; angle >= -90; angle -= d_theta) {
			double rad = angle * (M_PI / 180);
			int d_x = Circle::radius() * cos(rad);
			int d_y = Circle::radius() * sin(rad);

			Line stripe{
				{ Circle::center().x + d_x, Circle::center().y - d_y},
				{ Circle::center().x - d_x, Circle::center().y - d_y}
			};
			stripe.set_color(col);
			stripe.set_style(stripe_style);

			std::cout << angle << "deg\t Start(" 
				<< Circle::center().x + d_x <<
				"," << Circle::center().y - d_y << ")\tEnd(" <<
				Circle::center().x -  d_x << "," << 
				Circle::center().y - d_y << ")\n";

			stripe.draw();
		}
	}
};