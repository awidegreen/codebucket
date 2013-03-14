/*
 * This is my header template with guard statement
 *
 */

#ifndef STATE_HH_
#define STATE_HH_

#include "Transition.hh"
#include <iostream>
#include <string>
#include <map>

template<class Ctx>
class State
{
  typedef std::map<std::string, Transition*> TransitionMap;
  typedef std::pair<std::string, Transition*> TransitionMapEntry;
protected:
  TransitionMap mTransitionMap; 

  void 
  addTransition(std::string key, Transition* t)
  {
    mTransitionMap.insert( TransitionMapEntry(key, t) );
    std::cout << "Transition added with key: " << key << std::endl;
  }

  virtual std::string getTransitionKey(int event) = 0;

public:
  void performTransition(Ctx context, int event)
  {
    // some actions before
    std::string key = getTransitionKey(event);
  
    TransitionMap::iterator it = mTransitionMap.find(key);
    if ( it != mTransitionMap.end() )
    {
      std::cout << "Right before execute" << std::endl;
      it->second->execute(event);
    }
    
    // some actions after
  }

};

#endif /* STATE_HH_ */
