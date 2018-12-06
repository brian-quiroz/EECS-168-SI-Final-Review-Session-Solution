#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car
{
  private:
    string m_make;
    int m_year;
  public:
    Car();
    ~Car();
    void setMake(string make);
    string getMake() const; //It is good practice to have const for getter functions since getter functions should not change the data in our objects
    void setYear(int year); //Setter functions should not have const because we do want to change a part of the object (m_year, in this case)
    int getYear() const;
};

#endif
