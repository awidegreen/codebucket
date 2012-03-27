#include "ClientSocket.hh"
#include "SocketException.hh"
#include <iostream>
#include <string>

#define SERVER_IP "130.100.97.29"
#define SERVER_PORT 50001

int main (int argc, char *argv[])
{
   std:: string reply;
   try
   {
      sockwrpr::ClientSocket client_socket(SERVER_IP, SERVER_PORT);
      client_socket << "foo";
      client_socket >> reply;
      std::cout << reply;
   }
   catch (sockwrpr::SocketException &e)
   {
      std::cout << "Exception was caught:" << e.description() << "\n";
   }
   return 0;
}
