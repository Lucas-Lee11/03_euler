all: q1.c q28.c
	gcc -o prgrm1 q1.c
	gcc -o prgrm28 q28.c

run: prgrm1 prgrm28
	./prgrm1
	./prgrm28
