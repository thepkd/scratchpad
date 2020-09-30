#include <iostream>


class Base {
	protected:
	int vertex; int color;
	public:
	Base() {std::cout << "Base Default Constructor" << std::endl;}
	Base(int i, int j) {std::cout << "Base Defined COnstructor" << std::endl; vertex=i; color=j;}
	void printVertex () {std::cout << "Vertex: " << vertex << std::endl;}
};

class Derive : public Base {
	public:
	Derive() {std::cout << "Derived Default Constructor" << std::endl;}
	Derive(int i, int j) : Base(i, j) { std::cout << "Derive Defined Constructor " << std::endl;}

};

