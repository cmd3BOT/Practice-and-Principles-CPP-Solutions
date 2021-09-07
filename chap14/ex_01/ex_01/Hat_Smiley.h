#pragma once

#define _USE_MATH_DEFINES
#include "Graph.h"
#include "Smiley.h"
#include <math.h>

namespace Graph_lib {
	class Hat_Smiley : public Smiley {
	public:
		Hat_Smiley(Point center, int rr);
		void draw_lines() const override;
	private:
		double hat_angle = M_PI / 6;
	};
};