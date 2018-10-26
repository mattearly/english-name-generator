#include <chrono>
#include <random>


///
/// \brief getRandomNumber Initilizes on first run, takes a seed from the current timestamp
/// \param start start of random number, standard integer limits
/// \param end end of random number, standard integer limits
/// \return returns a randomly chosen number.
///
int getRandomNumber(const int& start, const int& end) {

  static long long int timeSeed = std::chrono::high_resolution_clock::now().time_since_epoch().count();

  static std::seed_seq ss{uint32_t(timeSeed & 0xffffffff), uint32_t(timeSeed >> 32)};

  std::uniform_int_distribution<int> unif(start, end);

  static std::mt19937 mgen(ss);

  return unif(mgen);

}
