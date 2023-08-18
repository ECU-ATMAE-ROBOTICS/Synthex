#include "SynthexUtil.h"
#include "Constants.h"
#include <math.h>

static int SynthexUtil::hashString(char word[]) {
  int hashSum = 0;
  int power = 0;

  for (int i = 0; word[i] != '\0'; i++){
    int charValue = word[i] - 'a' + 1; // Convert character to a numerical value starting from 1
    hashSum = (hashSum + charValue * power) % MODULUS; // Calculate the hash sum for the current character
    power = (power * PRIME_BASE) % MODULUS; // Update the power for the next character
  }

  return hashSum;
}