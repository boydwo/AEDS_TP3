#include "TAD_Biblioteca.h"

void inicializaBiblioteca(TBiblioteca *biblioteca)
{
    biblioteca->Primeiro = INICIO;
    biblioteca->Ultimo = biblioteca->Primeiro;
    biblioteca->tamanho = 0;
}

void insereTexto(TBiblioteca *biblioteca, TTexto texto)
{
    if (biblioteca->Ultimo > MAX_TAM)
        return;
    else
    {
        biblioteca->biblioteca[biblioteca->Ultimo] = texto;
        biblioteca->Ultimo++;
        biblioteca->tamanho++;
    }
}
int imprimeBiblioteca(TBiblioteca *biblioteca)
{
    int i;
    for (i = 0; i < biblioteca->tamanho; i++)
        imprimeTexto(&biblioteca->biblioteca[i]);
}

void removetexto(TBiblioteca *biblioteca)
{
}

int tamanhoBiblioteca(TBiblioteca *biblioteca)
{
    return biblioteca->tamanho;
}