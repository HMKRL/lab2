P=BMI
OBJECT=main.o BMI.o
CXX=g++
CXXFLAGS=-g -Wall

all:$(OBJECT)
	$(CXX) -o $(P) $(CXXFLAG) $(OBJECT)
main.o:main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp
BMI.o:BMI.cpp
	$(CXX) $(CXXFLAGS) -c BMI.cpp
clean:
	rm $(P) *.o
