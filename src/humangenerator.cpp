#include "humangenerator.h"
#include <fstream>

extern int getRandomNumber(const int& start, const int& end);

using namespace std;

HumanGenerator::HumanGenerator()
{
  int isMale = getRandomNumber(0, 1);
  if (isMale) {
    FirstName = "John";
  } else {
    FirstName = "Jane";
  }

  LastName = "Doe";
  SSN = "555-555-5555";

}

void HumanGenerator::newFirstName()
{
  ifstream firstNameFile("./data/first_names.dat");
  string tmp = "FIRSTNAMEFAILED";

  if (firstNameFile.is_open()) {
    int seed = getRandomNumber(0, 3998);
    for (int i = 0; i < seed; i++) {
      getline(firstNameFile, tmp);   ///skip lines = to the seed
    }
    getline(firstNameFile, tmp);
  }

  FirstName = tmp;
}

void HumanGenerator::newLastName()
{
  ifstream lastNameFile("./data/last_names.dat");
  string tmp = "LASTNAMEFAILED";

  if (lastNameFile.is_open()) {
    int seed = getRandomNumber(0, 998);
    for (int i = 0; i < seed; i++) {
      getline(lastNameFile, tmp);   ///skip lines = to the seed
    }
    getline(lastNameFile, tmp);
  }

  LastName = tmp;
}

void HumanGenerator::newSSN()
{
  string tmp = "SSNFAILED";
  tmp = to_string(getRandomNumber(100, 999)) + "-";
  tmp += to_string(getRandomNumber(10, 99)) + "-";
  tmp += to_string(getRandomNumber(1000, 9999));
  SSN = tmp;
}


std::string HumanGenerator::getLastName() const
{
  return LastName;
}

void HumanGenerator::setLastName(const std::string &value)
{
  LastName = value;
}

std::string HumanGenerator::getFirstName() const
{
  return FirstName;
}

void HumanGenerator::setFirstName(const std::string &value)
{
  FirstName = value;
}

std::string HumanGenerator::getSSN() const
{
  return SSN;
}

void HumanGenerator::setSSN(const std::string &value)
{
  SSN = value;
}
