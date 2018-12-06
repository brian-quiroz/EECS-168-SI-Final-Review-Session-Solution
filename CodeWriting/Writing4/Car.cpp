#include "Car.h"

Car::Car()
{
  m_make = "Default Make"; //Constructor sets m_make to "Make" every time a Car object is created.
  m_year = 2018; //Constructor sets m_year to 2018 every time a Car object is created.
}

Car::~Car()
{
  //Empty destructor
}

void Car::setMake(string make)
{
  m_make = make;
}

string Car::getMake() const
{
  return m_make;
}

void Car::setYear(int year)
{
  m_year = year;
}

int Car::getYear() const
{
  return m_year;
}
