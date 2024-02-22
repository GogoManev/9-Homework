all: quadraticroots.o main.exe

quadraticroots.o: quadraticroots.h quadraticroots.c 
	gcc -c quadraticroots.c -o quadraticroots.o

main.exe: main.c quadraticroots.o
	gcc main.c quadraticroots.o -o main.exe

clean: 
	del /Q *.exe *.o