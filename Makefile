CXX=g++
CXXFLAGS=-std=c++11 -o
FILES=Hashtable.cpp
OBJ=sort.o

default:
	$(CXX) $(CXXFLAGS) $(OBJ) $(FILES)
	
clean:
	rm -rf $(OBJ)