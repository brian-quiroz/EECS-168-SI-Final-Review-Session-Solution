#include <iostream>

#include "Car.h"

using namespace std;

int main()
{
	/*----------------------------------------------------Original Code----------------------------------------------------*/
	//Note: The compiler may give you warnings for "unused variables", but this program should compile anyways.
	int size = 10;
	int nums[4];
	Car myCar;
  Car * myCar2 = new Car();

	Car arrayOfCars1[size];
	Car * arrayOfCars2 = new Car[size];

	Car ** arrayOfCarPointers = new Car*[size];
	for (int i = 0; i < size; i++)
	{
		arrayOfCarPointers[i] = new Car();
	}

  Car ** arrayOfCars2D = new Car*[size];
	for (int i = 0; i < size; i++) {
  	arrayOfCars2D[i] = new Car[size];
	}
	bool temp = false;
	double myHeapAllocatedvariable = 1.5;



  /*----------------------------------------------------Printing----------------------------------------------------*/
  cout << myCar.getMake() << ", " << myCar.getYear() << endl;
  cout << myCar2->getMake() << ", " << myCar2->getYear() << endl;

  for (int i = 0; i < size; i++)
  {
    cout << arrayOfCars1[i].getMake() << ", " << arrayOfCars1[i].getYear() << endl;
  }

  for (int i = 0; i < size; i++)
  {
    cout << arrayOfCars2[i].getMake() << ", " << arrayOfCars2[i].getYear() << endl;
  }

  for (int i = 0; i < size; i++)
  {
    cout << arrayOfCarPointers[i]->getMake() << ", " << arrayOfCarPointers[i]->getYear() << endl;
  }

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      cout << arrayOfCars2D[i][j].getMake() << ", " << arrayOfCars2D[i][j].getYear() << endl;
    }
  }

	/*----------------------------------------------------Deleting Heap-Allocated Stuff----------------------------------------------------*/
	delete myCar2;
	delete[] arrayOfCars2;

	for (int i = 0; i < size; i++) {
		delete arrayOfCarPointers[i];
	}
	delete[] arrayOfCarPointers;

	for (int i = 0; i < size; i++) {
		delete[] arrayOfCars2D[i];
	}
	delete[] arrayOfCars2D;

	return 0;
}
