# fazer os .o para cada .c/.h (ex main.o) e adicinar no exec:
exec: main.o TAD_Palavra.o TAD_Texto.o TAD_Biblioteca.o
	gcc main.o TAD_Palavra.o TAD_Texto.o TAD_Biblioteca.o -o exec

main.o: main.c
	gcc -c main.c

TAD_Palavra.o: TAD_Palavra.c TAD_Palavra.h
	gcc -c TAD_Palavra.c

TAD_Texto.o: TAD_Texto.c TAD_Texto.h
	gcc -c TAD_Texto.c
	
TAD_Biblioteca.o: TAD_Biblioteca.c TAD_Biblioteca.h
	gcc -c TAD_Biblioteca.c

clean:
	rm *.o exec