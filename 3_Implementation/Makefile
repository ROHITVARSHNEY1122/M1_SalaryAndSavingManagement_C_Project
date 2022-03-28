# Name of the project
PROJECT_NAME = SALARY AND SAVING MANAGEMENT

# Output directory
BUILD = build

# All source code files
SRC = main_program.c\
src/salaryandsavingmanage.c

# All test source files
TEST_SRC = src/salaryandsavingmanage.c\
test/main_test.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(SALARYANDSAVINGMANAGEMENT).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(SALARYANDSAVINGMANAGEMENT).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(SALARYANDSAVINGMANAGEMENT):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out


# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity .

memcheck:
	valgrind ./$(TEST_OUTPUT)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

coverage:$(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)
	gcov -a salaryandsavingmanage.c


# Create new build folder if not present
$(BUILD):
	mkdir build
	
main.out: main_program.c src/salaryandsavingmanage.c
	gcc -Iinc ./src/salaryandsavingmanage.c ./main_program.c -o main.out

run : main.out
	./main.out

clean: 
	rm *.out
