all: program

program: main.o user.o
	g++ main.o user.o -o /home/leandro/bin/cpp_build/myProgram
	/home/leandro/bin/cpp_build/myProgram

main.o: main.cpp
	g++ -c main.cpp -o main.o

user.o: user.h user.cpp
	g++ -c user.cpp -o user.o

clean:
	rm *.o
