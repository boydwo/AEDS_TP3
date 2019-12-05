#include "TAD_Texto.h"

void inicializaTexto(TTexto *texto)
{
    texto->Primeiro = INICIO;
    texto->Ultimo = texto->Primeiro;
    texto->tamanho = 0;
}

void inserePalavra(TTexto *texto, TPalavra palavra)
{
    if (texto->Ultimo > MAX_TAM)
        return;
    else
    {
        texto->texto[texto->Ultimo] = palavra;
        texto->Ultimo++;
        texto->tamanho++;
    }
}

void removePalavra(TTexto *texto)
{
    texto->Ultimo--;
    texto->tamanho--;
}

void imprimeTexto(TTexto *texto)
{
    int i;
    for (i = 0; i < texto->tamanho; i++)
    {
        imprimePalavra(&texto->texto[i]);
        printf("\n");
    }
    //printf("%c", texto[i]->palavra);
}

int tamanhoTexto(TTexto *texto)
{
    return texto->tamanho;
}
