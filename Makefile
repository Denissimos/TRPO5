INCLUDES = -I src/ -I thirdparty/

all: ./bin/main ./bin/test

./bin/main: dirs ./obj/main.o ./obj/root.o 
	gcc ./obj/main.o ./obj/root.o -Wall -o ./bin/main -lm

./bin/test: dirs ./obj/main_test.o ./obj/root.o  ./obj/root_test.o
	gcc ./obj/main_test.o ./obj/root.o ./obj/root_test.o -Wall -o ./bin/test -lm

dirs:
	mkdir obj
	mkdir bin

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -Wall -o ./obj/main.o $(INCLUDES)

./obj/root.o: ./src/root.c
	gcc -c ./src/root.c -Wall -o ./obj/root.o $(INCLUDES)

./obj/main_test.o: ./test/main.c
	gcc -c ./test/main.c -Wall -o ./obj/main_test.o $(INCLUDES)

./obj/root_test.o: ./test/root_test.c
	gcc -c ./test/root_test.c -Wall -o ./obj/root_test.o $(INCLUDES)

.PHONY: clean
clean:
	rm -f -r bin/ obj/