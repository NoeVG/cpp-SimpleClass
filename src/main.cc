#include <iostream>

#include "speak.h"

int main (int argc, char *argv[])
{
  int retval;

  Speak alice;
  Speak bob(30);

  if ( argc != 2 ) {
    std::cout<<"usage: "<< argv[0] <<" <greetee>" << std::endl;
    retval = EXIT_FAILURE;
    }
  else {
    std::string greetee = argv[1];
    std::cout << "Hello " << greetee << std::endl;

    alice.SaySomething();
    bob.SaySomething();

    retval = EXIT_SUCCESS;
    }

  return retval;
}
