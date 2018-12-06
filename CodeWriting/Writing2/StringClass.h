#ifndef STRINGCLASS_H
#define STRINGCLASS_H

#include <string>

class StringClass
{
  private:
    char* m_charArr;
    int m_length;

  public:
    StringClass(int length); //Constructor
    StringClass(const StringClass& strClassObject); //Copy constructor
    ~StringClass(); //Destructor

    char getCharacter(int index) const; //Similar to the .at() function that actual strings have
    void setCharacter(int index, char c); //actual strings don't have a function like this
    int getLength() const; //Similar to the .length() function that actual strings have

    /*We don't want to have a "setLength()" function because m_length should be the actual length of the array,
      not whatever the user wants.*/

    //This is called overloading a comparison operator. This allows us to compare StringClass objects with strings.
    bool operator==(std::string rhs) const; //rhs stands for right hand side

    //This is called overloading the assignment operator. This function allows us to assign a string to a StringClass object.
    void operator=(std::string rhs) const;
};

#endif
