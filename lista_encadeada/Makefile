# fazer os .o para cada .c/.h (ex main.o) e adicinar no exec:
exec: main.o TAD_Palavra.o TAD_Texto.o TAD_Biblioteca.o TAD_PalavraLE.o TAD_TextoLE.o TAD_BibliotecaLE.o
	gcc main.o TAD_Palavra.o TAD_Texto.o TAD_Biblioteca.o TAD_PalavraLE.o TAD_TextoLE.o TAD_BibliotecaLE.o -o exec

main.o: main.c
	gcc -c main.c

TAD_Palavra.o: TAD_Palavra.c TAD_Palavra.h
	gcc -c TAD_Palavra.c

TAD_Texto.o: TAD_Texto.c TAD_Texto.h
	gcc -c TAD_Texto.c
	
TAD_Biblioteca.o: TAD_Biblioteca.c TAD_Biblioteca.h
	gcc -c TAD_Biblioteca.c
LE
TAD_PalavraLE.o: TAD_PalavraLE.c TAD_PalavraLE.h
	gcc -c TAD_PalavraLE.c

TAD_TextoLE.o: TAD_TextoLE.c TAD_TextoLEh
	gcc -c TAD_TextoLE.c
	
TAD_BibliotecaLE.o: TAD_BibliotecaLE.c TAD_BibliotecaLE.h
	gcc -c TAD_BibliotecaLE.c
clean:
	rm *.o exec