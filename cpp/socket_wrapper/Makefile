# Makefile for the socket wrapper
#

simple_server_objects = ServerSocket.o ISocketBase.o 
simple_client_objects = ClientSocket.o ISocketBase.o


all : test_client test_server

server_classes: $(simple_server_objects)
	g++ -c $(simple_server_objects)

test_server: server_classes
	g++ -o test_server $(simple_server_objects) test_server.cpp

client_classes: $(simple_client_objects)
	g++ -c $(simple_client_objects)

test_client: client_classes
	g++ -o test_client $(simple_client_objects) test_client.cpp

ISocketBase: ISocketBase.cpp
ServerSocket: ServerSocket.cpp
ClientSocket: ClientSocket.cpp

clean:
	rm -f *.o test_client test_server
