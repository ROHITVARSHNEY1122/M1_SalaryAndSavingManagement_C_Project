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

main.out: main_program.c src/salaryandsavingmanage.c
	gcc -Iinc ./src/salaryandsavingmanage.c ./main_program.c -o main.out

run : main.out
	./main.out

clean: 
	rm *.out
