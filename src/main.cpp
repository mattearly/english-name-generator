#include <iostream>
#include "humangenerator.h"

using namespace std;

int main(int argc, char** argv) {

  cout << "BEGIN RANDOM NAME GEN!!\n";

  HumanGenerator human;
  for (int i = 0; i < 10; i++) {
    human.newFirstName();
    human.newLastName();
    human.newSSN();

    cout << human.getFirstName() << endl;
    cout << human.getLastName() << endl;
    cout << human.getSSN() << endl;
  }
  return 0;
}
