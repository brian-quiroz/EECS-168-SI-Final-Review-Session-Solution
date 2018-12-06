#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User {
  private:
    string m_email;
    string m_password;
    string m_name;
    int m_age;
  public:
    User(string email, string password, string name, int age);
    ~User();
    void setEmail(string email);
    string getEmail() const;
    void setPassword(string password);
    string getPassword() const;
    void setName(string name);
    string getName() const;
    void setAge(int age);
    int getAge() const;
};

#endif
