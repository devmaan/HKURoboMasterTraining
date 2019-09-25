all: c_assignment1

c_assignment1.o: c_assignment1.c c_assignment1.h
	gcc -c $<

c_assignment1: c_assignment1.o
	gcc $^ -o $@

clean:
	rm -f c_assignment1.o c_assignment1
