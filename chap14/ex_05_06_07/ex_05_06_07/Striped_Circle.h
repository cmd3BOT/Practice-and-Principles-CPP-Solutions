#pragma once
#include "Graph.h"

namespace Graph_lib {
	class Striped_Circle : public Circle {
	public:
		Striped_Circle(Point center, int radius, double d_theta, Line_style sty, Color col);
		Striped_Circle(Point center, int radius);

		void draw_lines() const override;
	private:
		double d_theta = 10;
		Line_style stripe_style{ Line_style(Line_style::solid, 1) };
		Color col{ Color::black };
	};
};