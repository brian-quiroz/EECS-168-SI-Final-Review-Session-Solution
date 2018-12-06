#include <iostream>
#include <string>

#include "StringClass.h"

int main()
{
  int length = 7;

  StringClass myStringClassObject(length); //Creating a stack allocated StringClass object
  myStringClassObject.setCharacter(0, 'E');
  myStringClassObject.setCharacter(1, 'E');
  myStringClassObject.setCharacter(2, 'C');
  myStringClassObject.setCharacter(3, 'S');
  myStringClassObject.setCharacter(4, '1');
  myStringClassObject.setCharacter(5, '6');
  myStringClassObject.setCharacter(6, '8');

  StringClass myStringClassObjectCopy(myStringClassObject); //Using the copy constructor to create a new object

  myStringClassObjectCopy.setCharacter(6, '9'); //Changing the copy object's array's last element to 9 instead of 8

  for (int i = 0; i < length; i++)
  {
    std::cout << myStringClassObject.getCharacter(i);
  }
  std::cout << std::endl;

  for (int i = 0; i < length; i++)
  {
    std::cout << myStringClassObjectCopy.getCharacter(i);
  }
  std::cout << std::endl;

  if (myStringClassObject == "EECS168") //This is only possible because we overloaded the "==" (equality comparison) operator.
  {
    std::cout << ":)\n";
  }
  else
  {
    std::cout << ":(\n";
  }

  if (myStringClassObjectCopy == "EECS169") //This is only possible because we overloaded the "==" (equality comparison) operator.
  {
    std::cout << ":)\n";
  }
  else
  {
    std::cout << ":(\n";
  }

  return 0;
}
