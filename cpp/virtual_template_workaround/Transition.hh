/*
 * This is my header template with guard statement
 *
 */

#ifndef TRANSITION_HH_
#define TRANSITION_HH_

#include <iostream>

class Transition
{
public:
  void execute(int event)
  {
    std::cout << "I do something, event: " << event << std::endl;
  }
};

#endif /* TRANSITION_HH_ */
