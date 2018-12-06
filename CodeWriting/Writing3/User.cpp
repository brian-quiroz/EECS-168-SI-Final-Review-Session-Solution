#include "User.h"

User::User(string email, string password, string name, int age)
{
  m_email = email;
  m_password = password;
  m_name = name;
  m_age = age;
}

User::~User()
{
  //Empty destructor - we didn't allocate anything in the heap so no need to delete anything.
}

void User::setEmail(string email)
{
  m_email = email;
}

string User::getEmail() const
{
  return m_email;
}

void User::setPassword(string password)
{
  m_password = password;
}

string User::getPassword() const
{
  return m_password;
}

void User::setName(string name)
{
  m_name = name;
}

string User::getName() const
{
  return m_name;
}

void User::setAge(int age)
{
  m_age = age;
}

int User::getAge() const
{
  return m_age;
}
