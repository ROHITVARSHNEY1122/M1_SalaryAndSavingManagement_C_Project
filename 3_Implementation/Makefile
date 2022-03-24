# Name of the project
PROJECT_NAME = SalaryAndSavingManagement

main.out: main_program.c src/salaryandsavingmanage.c
	gcc -Iinc ./src/salaryandsavingmanage.c ./main_program.c -o main.out

run : main.out
	./main_program.out

clean: 
	rm *.out
