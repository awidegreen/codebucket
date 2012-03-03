CXX=g++
CXXFLAGS=-c -Wall -Wextra -g
LDFLAGS=
SOURCES=main.cpp Point.cpp Rectangle.cpp Point.h Rectangle.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=mymain

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	$(RM) *.o *~ $(EXECUTABLE)