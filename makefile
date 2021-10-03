all: switch.o
	gcc -o switch switch.o

switch.o: switch.c
	gcc -c switch.c

run:
	./switch

clean:
	rm *.o
