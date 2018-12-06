#include <iostream>

#include "SocialMedia.h"
#include "User.h"

int main() {
  SocialMedia* mySocialMedia = new SocialMedia(); //Creating a socialMedia object in the heap.
  std::string email = "";
  std::string password = "";
  int userChoice = 0;
  char character = '\0';

  do
  {
    std::cout << "\n\nMenu:\n";
    std::cout << "1) Log In\n";
    std::cout << "2) Search\n";
    std::cout << "3) Quit\n";
    std::cout << "Choose an option: ";
    std::cin >> userChoice;

    if (userChoice == 1)
    {
      std::cout << "Input email: ";
      //Extra getline, because we just cin'ed
      //We need an extra getline after using cin and before using a getline.
      std::getline(std::cin, email);
      std::getline(std::cin, email);
      std::cout << "Input password: ";
      std::getline(std::cin, password);
      mySocialMedia->login(email, password); //Calling the login function in the SocialMedia class
    }

    else if (userChoice == 2)
    {
      std::cout << "Input character: ";
      std::cin >> character;
      mySocialMedia->search(character); //Calling the search function in the SocialMedia class
    }

  } while (userChoice != 3);

  delete mySocialMedia;
  return 0;
}
