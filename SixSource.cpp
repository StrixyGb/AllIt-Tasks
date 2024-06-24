#include <iostream>
using namespace std;
class Vechnicle {
protected:
	int speed;
	int fuel;
public:
	Vechnicle(int s,int f):speed(s),fuel(f){}
	int getspeed() {
		return speed;
	}
	int getfuel() {
		return fuel;
	}
	void displayInfo() const{
		cout << "\nVechnicle info: " << " Speed: " << speed << " km/h " << "Fuel: " << fuel << " l \n";
	}
};
class Car : public Vechnicle {
protected:
	int passengers;
public:
	Car(int s, int f, int p) : Vechnicle(s, f), passengers(p){}

	int getpassengers()const {
		return passengers;
	}
	void displaycar()const {
		Vechnicle::displayInfo(); \
			cout << "Passengers: " << passengers << " in car " << endl;
	}
};
class Truck : public virtual Vechnicle {
private:
	bool withTrailer;
public:
	Truck(int s, int f, bool w) : Vechnicle(s, f), withTrailer(w) {}

	string isTrailer() const {
		return (withTrailer ? "With trailer" : "Without trailer");
	}

	void displayTruck() const {
		Vechnicle::displayInfo();
		cout << "Truck: " << isTrailer() << endl;
	}
};
//class TruckCar : public Truck, public Car {
//public:
//	TruckCar(int s, int f, int p, bool w) : Vechnicle(s, f), Car(s, f, p), Truck(s, f, w) {}
//
//	void displayInfo() const {
//		cout << "TruckCar: ";
//		Vechnicle::displayInfo(); // Display Vechnicle info once
//		cout << "Passengers: " << Car::getpassengers() << endl;
//		cout << "Truck: " << Truck::isTrailer() << endl;
//	}
//};
void main() {
	Car c(100,10,4);
	c.displaycar();

	Truck t(100, 10, false);
	t.displayTruck();
}