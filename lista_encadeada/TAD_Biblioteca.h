#include "TAD_Texto.h"

typedef struct{
    TTexto texto;
    Apontador pProx;
}TCelula;

typedef struct{
    Apontador pPrimeiro;
    Apontador pUltimo;
}TBiblioteca;

void inicializaBiblioteca(TBiblioteca* biblioteca);
void insereTexto(TBiblioteca* biblioteca, TTexto texto);
void removetexto(TBiblioteca* biblioteca);
int tamanhoBiblioteca(TBiblioteca biblioteca);