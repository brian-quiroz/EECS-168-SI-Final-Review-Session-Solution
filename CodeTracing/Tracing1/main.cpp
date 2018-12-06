#include <iostream>

using namespace std;

#include "Circle.h"

Circle* func2(int r) {
	Circle* circleObject = new Circle(r);
	return circleObject;
}

void func(char x, double& y, double& z, Circle* circlePtr) {
	x = 'n';
	circlePtr = func2(1);
	y = circlePtr->calculateArea();
	z = -2;
}

int main() {
	char x = 'm';
	double a = 4;
	double z = 3;

	Circle* ptr = nullptr;
	func(x, a, z, ptr);
	Circle* ptr2 = func2(4);
	
	cout << x << ", " << a << endl;

	if (ptr != nullptr) {
    ptr->setRadius(z);
		cout << ptr->getRadius() << endl;
	}

	if (ptr2 != nullptr) {
		ptr2->setRadius(z);
		cout << ptr2->getRadius() << endl;
	}

	delete ptr;
	delete ptr2;
	return 0;
}
