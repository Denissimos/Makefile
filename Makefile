main: ./obj/main.o ./obj/qwerty.o ./bin
	gcc -o ./bin/main ./obj/main.o ./obj/qwerty.o

./obj/main.o: ./src/main.c ./obj
	gcc -c ./src/main.c -o ./obj/main.o

./obj/qwerty.o: ./src/qwerty.c ./obj
	gcc -c ./src/qwerty.c -o ./obj/qwerty.o

./bin:
	mkdir bin

./obj:
	mkdir obj

.PHONY: clean
clean:
	rm -f -r bin obj
