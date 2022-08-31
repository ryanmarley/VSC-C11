# simple makefile

# define target dependencies and files
rentasstapp: rentasstapp.o rentasst.o
	g++ -o rentasstapp rentasstapp.o rentasst.o

# define how each object file is to be built
rentasstapp.o: rentasstapp.cpp rentasst.h
	g++ -c rentasstapp.cpp -Wall -Wextra -Wpedantic -std=c++11

rentasst.o: rentasst.cpp rentasst.h
	g++ -c rentasst.cpp -Wall -Wextra -Wpedantic -std=c++11

# clean up
clean:
	rm -f rentasstapp.exe *.o