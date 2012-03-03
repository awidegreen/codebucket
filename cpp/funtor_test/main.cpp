#include <iostream>
#include <string>

class Aclass 
{
public:
  // ctor
  Aclass(std::string aS)
  {
    mS = aS;
  }
  
  void amethod()
  {
    std::cout << "Aclass::amethod(): " << mS << std::endl;
  }
  
private:
  std::string mS;
};

//---------------------------------------------------------------
//---------------------------------------------------------------

class Bclass
{
public:
  Bclass(std::string s) : mS(s) {}
  
  void bmethod()
  {
    std::cout << "Bclass::bmethod(): " << mS << std::endl;
  }

private:
  std::string mS;
};

//---------------------------------------------------------------
//---------------------------------------------------------------


template<class T>
class Caller
{
public:
  typedef void (T::*MemFn)(); // typedef to get hold of func sig.
  
  void tocall(MemFn method)
  {
    std::cout << "tocall was called; I'm gonna call the given"
                 "method now." << std::endl;

    T* a = new T("hallo welt");

    (a->*method)();
  }
};


//---------------------------------------------------------------
//---------------------------------------------------------------

int main()
{
  Caller<Aclass> callerA;

  callerA.tocall( &Aclass::amethod );

  Caller<Bclass> callerB;

  callerB.tocall( &Bclass::bmethod );
  
  return 0;
}
