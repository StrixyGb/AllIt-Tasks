#include <iostream>
using namespace std;
class Vector {
private:
	int x;
	int y;
	int z;
public:
	Vector(): x(0),y(0),z(0){}
	Vector(int x,int y,int z): x(x),y(y),z(z){}

	Vector operator+(const Vector& other) {
		return Vector(x + other.x, y + other.y, z + other.z);
	}
	Vector operator-(const Vector& other) {
		return Vector(x - other.x, y - other.y, z - other.z);
	}
	double operator*(const Vector& other) {
		return x * other.x + y * other.y + z * other.z;
	}
	bool operator==(const Vector& other) {
		return x == other.x && y == other.y && z == other.z;
	}
	bool operator != (const Vector & other) {
		return !(*this == other);
	}

	void print() {
		cout << " Vector: " << "(" << x << ")" << "(" << y << ")" << "(" << z << ");" <<  endl;
	}
};

void main() {
	Vector v1(5, 2, 5);
	Vector v2(7, 8, 1);

	cout << "\nPrint Vector 1 : \n";
	v1.print();
	cout << "\nPrint Vector 2 : \n";
	v2.print();

	Vector v3 = v1 + v2;
	cout << "\nVector 1 + Vector 2 = Vector 3: \n";
	v3.print();
	Vector v4 = v2 - v1;
	cout << "\nVector 2 - Vector 1 = Vector 4: \n";
	v4.print();
	double dot = v1 * v2;
	cout << "\nVector 1 * Vector 2 = " << dot << "\n";
	bool equal = v1 == v2;
	cout << "\n?Vector 1 == Vector 2: " <<( equal ? "True" : "False") << "\n";
	bool isnotequalequa = v1 != v2;
	cout << "?Vector 1 != Vector 2: " << (isnotequalequa ? "True " : "False") << "\n";
	


}