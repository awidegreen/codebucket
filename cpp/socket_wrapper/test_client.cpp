#include "ClientSocket.hh"
#include "SocketException.hh"

#include <string>
#include <iostream>

using namespace sockwrpr;

int main()
{
   std::string cmdToSend = "register awidegreen";

   try
   {
      std::string host = "130.100.97.29";
//      host = "127.0.0.1";
      int port = 50031;

      ClientSocket csock(host, port);
            
      std::string reply;
      
      csock << cmdToSend;
      csock >> reply;

      std::cout << "the reply from the server was: " << reply << std::endl;
   }
   catch ( SocketException& e )
   {
      std::cout << "SocketExpection caught: " << e.description() << std::endl;
      return 1;
   }

   return 0;
}
