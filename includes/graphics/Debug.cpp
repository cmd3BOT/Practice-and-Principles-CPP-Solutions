#include <vector>
#include <string>
#include <iostream>
#include "Graph.h"

void dbg(std::vector<double> a) {
	for (double x : a) std::cout << x << " ";
	std::cout << "\n";
}

void dbg(std::vector<char> a) {
	for (char x : a) std::cout << x << " ";
	std::cout << "\n";
}

void dbg(std::vector<std::string> a) {
	for (std::string x : a) std::cout << x << " ";
	std::cout << "\n";
}

void dbg(std::vector<Graph_lib::Point> a) {
	for (Graph_lib::Point x : a) std::cout << x << " ";
	std::cout << "\n";
}

void dbg(std::vector<int> a) {
	for (int x : a) std::cout << x << " ";
	std::cout << "\n";
}