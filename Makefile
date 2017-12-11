test: objects/test.o objects/outputTest.o objects/output.o
	g++ test.o outputTest.o output.o -o test/test.out

objects/test.o: test/test.cpp
	g++ -c test/test.cpp 

objects/outputTest.o: test/outputTest.cpp test/outputTest.hpp
	g++ -c test/outputTest.cpp test/outputTest.hpp 

objects/output.o: src/output.cpp src/output.hpp
	g++ -c src/output.cpp src/output.hpp 

clean:
	rm  *.o
