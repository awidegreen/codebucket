#include "MyState.hh"
#include <iostream>

int main()
{
  MyState s;  

  s.performTransition("mycontext", 0); 
  s.performTransition("mycontext", 1); 
  s.performTransition("mycontext", 2); 

  return 0;
}
