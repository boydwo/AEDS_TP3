#include "TAD_Texto.h"

typedef struct{
    TTexto biblioteca[MAX_TAM];      //Erro de tamanhao wtf
    int tamanho;                    //quantidade de textos
    Apontador Primeiro, Ultimo;
}TBiblioteca;

void inicializaBiblioteca(TBiblioteca* biblioteca);
void insereTexto(TBiblioteca* biblioteca, TTexto texto);
void removetexto(TBiblioteca* biblioteca);
int tamanhoBiblioteca(TBiblioteca biblioteca);
