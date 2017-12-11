CC=g++
C_FLAGS= -Wall
TEST_SOURCES=test/test.cpp test/outputTest.cpp src/output.cpp
TEST_DEPS= test/outputTest.h src/output.h
TEST_OBJECTS=$(TEST_SOURCES:.cpp=.o)
TEST_OUT=test.out

test/test.out: $(TEST_SOURCES) $(TEST_OUT)
    
$(TEST_OUT): $(TEST_OBJECTS) 
	$(CC) $(C_FLAGS) $(TEST_OBJECTS) -o $@

%.o: %.cpp $(TEST_DEPS)
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	rm src/*.o test/*.o