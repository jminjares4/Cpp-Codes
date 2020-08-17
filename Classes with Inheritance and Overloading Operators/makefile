#Author: Jesus Minjares BSEE
main:	main.o user.o student.o teacher.o
	g++ main.o user.o student.o teacher.o -o main -std=c++1z
main.o:	main.cpp
	g++ -c main.cpp
user.o:	user.cpp
	g++ -c user.cpp
student.o: student.cpp
	g++ -c student.cpp
teacher.o: teacher.cpp
	g++ -c teacher.cpp
run:
	make
	./main
clean:
	rm *.o main
