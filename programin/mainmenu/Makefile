all: help.exe strlength.exe strconcat.exe strcompare.exe

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o

help.exe: help.c mystrings.o mystrings.h
	gcc help.c mystrings.o -o help.exe

strlength.exe: strlength.c mystrings.o mystrings.h
	gcc strlength.c mystrings.o -o strlength.exe

strconcat.exe: strconcat.c mystrings.o mystrings.h
	gcc strconcat.c mystrings.o -o strconcat.exe

strcompare.exe: strcompare.c mystrings.o mystrings.h
	gcc strcompare.c mystrings.o -o strcompare.exe

clean:
	del /Q *.exe *.o
