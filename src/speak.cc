#include <iostream>

#include "speak.h"

Speak :: Speak() {
  i_ = 2;
}

Speak :: Speak(int i) {
  i_ = i;
}

Speak :: ~Speak() {
}

int Speak :: GetI() {
  return i_;
}

void Speak :: SaySomething() {
  std::cout << "Hello Class, your number is " << GetI() << std::endl;
}
