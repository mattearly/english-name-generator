#ifndef HUMANGENERATOR_H
#define HUMANGENERATOR_H
#include <string>

class HumanGenerator
{
public:

  HumanGenerator();

  void newFirstName();
  void newLastName();
  void newSSN();

  std::string getLastName() const;
  void setLastName(const std::string &value);

  std::string getFirstName() const;
  void setFirstName(const std::string &value);

  std::string getSSN() const;
  void setSSN(const std::string &value);

private:
  std::string FirstName;
  std::string LastName;
  std::string SSN;
};

#endif // HUMANGENERATOR_H
