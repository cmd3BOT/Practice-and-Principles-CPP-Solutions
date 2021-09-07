#pragma once
#include "Striped_Rectangle.h"

namespace Graph_lib {
	Striped_Rectangle::Striped_Rectangle(Point xy, int ww, int hh, Line_style sty, Color col, int space): 
		Rectangle::Rectangle(xy, ww, hh), stripe_style{ sty }, col{ col }, spacing{space} {}

	Striped_Rectangle::Striped_Rectangle(Point xy, int ww, int hh) :
		Rectangle::Rectangle(xy, ww, hh) {}

	void Striped_Rectangle::draw_lines() const {
		Rectangle::draw_lines();

		for (int i = spacing; i < Rectangle::width(); i += spacing) {
			Line stripe{ 
				{ Rectangle::nw().x + i, Rectangle::nw().y},
				{ Rectangle::nw().x + i, Rectangle::nw().y + Rectangle::height()}
			};
			stripe.set_color(col);
			stripe.set_style(stripe_style);

			stripe.draw();
		}
	}
};