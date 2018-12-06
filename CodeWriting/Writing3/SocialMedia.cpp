#include "SocialMedia.h"

SocialMedia::SocialMedia()
{
  std::string email;
  std::string password;
  std::string name;
  int age;
  ifstream inFile;
  //In your lab, you have to get the filename from the terminal and pass it to the Social Media constructor
  //Here, we'll hard-code the name of the file to "data.txt".
  inFile.open("data.txt");

  if (inFile.is_open()) {
    inFile >> m_size;
    m_userArray = new User*[m_size];
    for (int i = 0; i < m_size; i++)
    {
      //The important part here is to know that this cannot be done with an array of User objects, which is why I created
      //an array of pointers to User objects. And again the reason for this is that the "User" class has a constructor
      //with parameters (but no parameterless constructor).
      m_userArray[i] = new User("Email", "Password", "Name", 0);

      inFile >> email;
      m_userArray[i]->setEmail(email); //We use an arrow rather than a dot because each m_userArray[i] is a pointer.
      inFile >> password;
      m_userArray[i]->setPassword(password);
      inFile >> name;
      m_userArray[i]->setName(name);
      inFile >> age;
      m_userArray[i]->setAge(age);
    }
  }

}

SocialMedia::~SocialMedia()
{
  for (int i = 0; i < m_size; i++)
  {
    delete m_userArray[i]; //We're deleting an object, so we should not have square brackets after "delete".
  }
  delete[] m_userArray; //We're deleting the array itself, so we do need brackets after "delete".
}

void SocialMedia::login(string email, string password) {
  bool emailFound = false;
  bool passwordMatched = false;
  User* user = nullptr;

  for (int i = 0; i < m_size; i++)
  {
    if (email == m_userArray[i]->getEmail())
    {
      emailFound = true; //If we find the email, we set the flag "emailFound" to true.
      user = m_userArray[i]; //We keep track of the specific user we found.
    }
  }

  if (emailFound == true) //Only if we find the user, we check to see if the user's password is the same as the one passed in to this function
  {
    if (password == user->getPassword())
    {
      passwordMatched = true; //If the password is the same, set the "passwordMatched" flag to true.
    }
  }

  //Print whether or not the login attempt was successful.
  if (passwordMatched == true)
  {
    std::cout << "Logged in!\n";
  }
  else
  {
    std::cout << "Login error.\n";
  }
}

void SocialMedia::search(char firstLetter)
{
  bool foundUsers = false;

  for (int i = 0; i < m_size; i++)
  {
    if ((m_userArray[i]->getName()).at(0) == firstLetter) //We compare the user's name at the specific character to the passed in character
    {
      foundUsers = true;
      std::cout << "Name: " << m_userArray[i]->getName() << "\nEmail: " << m_userArray[i]->getEmail() << std::endl; //We print the name and email
    }
  }

  if (foundUsers == false)
  {
    std::cout << "No users found.\n";
  }
}
