#include <iostream>
#include<cmath>
using namespace std;
class Shape {

public:
	virtual double area() const {
		return 0;
	}
	~Shape() {
	};
};

class Triangle : public Shape {
protected:
	int base;
	int height;
public:
	Triangle(int b, int h) : base(b), height(h) {
	}
	double area()const override {
		return 0.5 * base * height;
	}
};
class Square : public Shape {
private:
	int side;
public:
	Square(int side) :side(side){}
	double area()const override {
		return side * side;

	}
};
class Circle : public Shape {
protected:
	double radius;
public:
	Circle(double r): radius(r){}
	double area() const override {
		return 3.14 * radius * radius;
	}
};
void main() {

	Triangle t(10, 2);
	cout << "Triangle equal : ";
	cout << t.area() << endl;
	Square s(4);
	cout << "\nSquare equal: ";
	cout << s.area() << endl;
	Circle c(5);
	cout << "Circle: " << c.area() << endl;
}