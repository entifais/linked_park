compile:
	g++ src/linkedlist.cpp src/linkedlist.h src/cli.h src/cli.cpp src/files.cpp src/files.h src/main.cpp   -O2 -o main
	sudo chmod 777 ./main 
	./main