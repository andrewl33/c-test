CC=g++
C_FLAGS= -Wall -std=c++11

BUILD_SOURCES= src/main.cpp src/CTest.cpp src/helper.cpp 
BUILD_DEPS=src/CTest.hpp src/helper.hpp src/test_methods/equalTo.hpp
BUILD_OBJECTS=$(BUILD_SOURCES:.cpp=.o)
BUILD_OUT=build.out

TEST_SOURCES=test/test.cpp test/CTestTest.cpp src/CTest.cpp test/helperTest.cpp src/helper.cpp
TEST_DEPS= test/CTestTest.hpp src/CTest.hpp test/helperTest.hpp src/helper.hpp
TEST_OBJECTS=$(TEST_SOURCES:.cpp=.o)
TEST_OUT=test.out

build: $(BUILD_SOURCES) $(BUILD_OUT)
    
$(BUILD_OUT): $(BUILD_OBJECTS) 
	$(CC) $(C_FLAGS) $(BUILD_OBJECTS) -o $@

%.o: %.cpp $(BUILD_DEPS)
	$(CC) $(C_FLAGS) -c $< -o $@


test: $(TEST_SOURCES) $(TEST_OUT)
    
$(TEST_OUT): $(TEST_OBJECTS) 
	$(CC) $(C_FLAGS) $(TEST_OBJECTS) -o $@

%.o: %.cpp $(TEST_DEPS)
	$(CC) $(C_FLAGS) -c $< -o $@

clean:
	rm src/*.o test/*.o