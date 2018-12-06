#ifndef SOCIALMEDIA_H
#define SOCIALMEDIA_H

#include <string>
#include <fstream>
#include <iostream>

#include "User.h"

using namespace std;

class SocialMedia {
  private:
    /*We need to create an array of pointers to User objects because the problem requires the User class to only have
      a constructor with parameters.*/
    User** m_userArray;
    int m_size;
  public:
    SocialMedia();
    ~SocialMedia();
    void login(string username, string password);
    void search(char firstLetter);
};

#endif
