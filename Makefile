CC=g++
C_FLAGS= -Wall -std=c++11

COMMON_SOURCES=src/helper.cpp src/test_methods/equalTo.cpp src/test_methods/closeTo.cpp \
src/test_methods/lessThan.cpp src/test_methods/greaterThan.cpp \
src/test_methods/within.cpp

BUILD_SOURCES=$(COMMON_SOURCES) src/main.cpp 
BUILD_DEPS=src/CTest.hpp src/helper.hpp test/testMethodTest.hpp src/test_methods/equalTo.hpp \
src/test_methods/closeTo.hpp src/test_methods/greaterThan.hpp  src/test_methods/lessThan.hpp \
src/test_methods/within.hpp
BUILD_OBJECTS=$(BUILD_SOURCES:.cpp=.o)
BUILD_OUT=build.out
TEST_SOURCES= $(COMMON_SOURCES) test/test.cpp test/CTestTest.cpp src/CTest.cpp \
test/helperTest.cpp test/testMethodTest.cpp  
TEST_OBJECTS=$(TEST_SOURCES:.cpp=.o)
TEST_DEPS=$(BUILD_DEPS) test/CTestTest.hpp test/helperTest.hpp 
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
	rm src/*.o test/*.o src/test_methods/*.o