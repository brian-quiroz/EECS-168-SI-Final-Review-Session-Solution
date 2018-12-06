#include "StringClass.h"

StringClass::StringClass(int length)
{
  m_length = length;
  m_charArr = new char[length];
}

StringClass::StringClass(const StringClass& strClassObject)
{
  m_length = strClassObject.getLength(); //Copy the passed-in object's length into this object's m_length variable.
  m_charArr = new char[m_length]; //Creating heap-allocated array.
  for (int i = 0; i < m_length; i++)
  {
    m_charArr[i] = strClassObject.getCharacter(i); //We cannot access strClassObject's array directly, but we can get the index
                                                   //at a particular index using the getCharacter function.
  }
}

StringClass::~StringClass()
{
  delete[] m_charArr; //Deleting the char array.
}

char StringClass::getCharacter(int index) const
{
  return m_charArr[index]; //Assume the index is within the valid range (0 to m_length - 1)
}

void StringClass::setCharacter(int index, char c)
{
  if ((index >= 0) && (index < m_length)) { //Make sure the index is within the valid range (0 to m_length - 1)
    m_charArr[index] = c;
  }
}

int StringClass::getLength() const
{
  return m_length;
}


bool StringClass::operator==(std::string rhs) const
{
 bool isSame = true;
 for (int i = 0; i < rhs.length(); i++)
 {
   if (m_charArr[i] != rhs.at(i))
   {
     isSame = false;
   }
 }
 if (isSame == true)
 {
   return true;
 }
 else
 {
   return false;
 }
}

void StringClass::operator=(std::string rhs) const
{
  for (int i = 0; i < m_length; i++) //we assume the string is of the correct length (m_length)
  {
    m_charArr[i] = rhs.at(i);
  }
}
