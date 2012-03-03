CXX=g++
CXXFLAGS=-c -Wall -Wextra -g
LDFLAGS=
SOURCES=main.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=functor_test

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	$(RM) *.o *~ $(EXECUTABLE)