#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <limits.h>
#include <math.h>

/**
 * y=\sum_{n=0}^{10,000}(-1)^{n}\cdot\left(\frac{x^{2n+1}}{(2n+1)!}\right) 
 */

int factorial(int n) {
	long long unsigned int fact = 1;
	for(int i = 1; i <= n; i++) fact*=i;
	return fact;
}

int main() {
	double inp_rad;
	std::cout << "Calculate sine of (rad): ";
	std::cin >> inp_rad;

	// wrap to -pi to pi
	double rad = fmod(inp_rad, 2 * M_PI);

	// run taylor series
	double sin = 0;

	int i = 0;
	int iterations = 7;

	while(i < iterations) {
		long double term = pow(-1, i) * (pow(rad, 2*i + 1) / factorial(2*i + 1));
		// std::cout << term << "\n";

		// exit if term overflows
		if(std::isinf(term)) break;
		sin += term;
		i++;
	}

	std::cout << "sin(" << inp_rad << ") = " << sin;
}