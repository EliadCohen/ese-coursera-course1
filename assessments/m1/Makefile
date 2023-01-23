stats:stats.o
		gcc stats.o -o stats
stats.o:
		gcc -c stats.c -o stats.o
clean:
		rm -f stats stats.o
run: stats
		./stats