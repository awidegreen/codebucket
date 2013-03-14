/*
 * This is my header template with guard statement
 *
 */

#ifndef MYSTATE_HH_
#define MYSTATE_HH_

#include "State.hh"
#include "Transition.hh"
#include <string>
#include <iostream>

class MyState : public State<std::string>
{
protected:
  virtual std::string
  getTransitionKey(int event)
  {
    std::cout << "in mystate getkey" << std::endl;
    return "one";
  }

public:
  MyState()
  {
    Transition* t = new Transition();
    addTransition("one", t);
  }
};

#endif /* MYSTATE_HH_ */
