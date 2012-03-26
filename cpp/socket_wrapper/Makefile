# Makefile for the socket wrapper
#

simple_server_objects = ServerSocket.o ISocketBase.o 
simple_client_objects = ClientSocket.o ISocketBase.o


all : simple_client simple_server

simple_server: $(simple_server_objects)
	g++ -o  $(simple_server_objects)


simple_client: $(simple_client_objects)
	g++ -c  $(simple_client_objects)


ISocketBase: ISocketBase.cpp
ServerSocket: ServerSocket.cpp
ClientSocket: ClientSocket.cpp
simple_server_main: simple_server_main.cpp
simple_client_main: simple_client_main.cpp


clean:
	rm -f *.o 