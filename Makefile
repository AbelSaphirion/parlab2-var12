all: main test

main:
	g++ -pthread -fopenmp -g func.cpp main.cpp -o lab.o
test:
	g++ -pthread -fopenmp -lboost_unit_test_framework -g func.cpp test_module.cpp -o test.o
