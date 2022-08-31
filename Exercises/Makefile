# simple makefile

# define target dependencies and files
avatarquizapp: avatarquizapp.o avatarquiz.o
	g++ -o avatarquizapp avatarquizapp.o avatarquiz.o

# define how each object file is to be built
avatarquizapp.o: avatarquizapp.cpp avatarquiz.h
	g++ -c avatarquizapp.cpp -Wall -Wextra -Wpedantic -std=c++11

avatarquiz.o: avatarquiz.cpp avatarquiz.h
	g++ -c avatarquiz.cpp -Wall -Wextra -Wpedantic -std=c++11

# clean up
clean:
	rm -f avatarquizapp.exe *.o