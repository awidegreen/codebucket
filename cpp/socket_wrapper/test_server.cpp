#include "ServerSocket.hh"
#include "SocketException.hh"

#include <iostream>

using namespace sockwrpr;

int main()
{
   int port = 50000;
   std::cout << "Starting socket test server on localhost, port: " << port << std::endl;
}
