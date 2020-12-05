lancer: compilall
	./dico


compilall: compiltest compildico
	gcc -Wall -o dico test.o dico.o


compildico : dico.c test.h
	gcc -Wall -c -g dico.c


compiltest: test.c test.h
	gcc -Wall -c test.c

debug:
	valgrind -s ./dico

clean:
	rm -f *.o
	rm -f dico
