sum: sum.o gettime.o 
	gcc -o sum sum.o gettime.o
sum.o: sum.c gettime.h 
	gcc -O3 -ffast-math -mavx2 -c -o sum.o sum.c
gettime.o: gettime.c gettime.h 
	gcc -O3 -ffast-math -mavx2 -c -o gettime.o gettime.c
clean:
	rm -f sum sum.o gettime.o
