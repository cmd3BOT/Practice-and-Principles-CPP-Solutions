#pragma once
#include "Graph.h"

namespace Graph_lib {
	class Striped_Rectangle : public Rectangle {
	public:
		Striped_Rectangle(Point nw, int w, int h, Line_style sty, Color col, int space);
		Striped_Rectangle(Point nw, int w, int h);

		void draw_lines() const override;
	private:
		int spacing = 5;
		Line_style stripe_style{Line_style(Line_style::solid, 1)};
		Color col{Color::black};
	};
};