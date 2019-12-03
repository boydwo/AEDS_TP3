#include "TAD_Palavra.h"

void inicializaPalavra(TPalavra *palavra)
{
    palavra->Primeiro = INICIO;
    palavra->Ultimo = palavra->Primeiro;
    palavra->tamanho = 0;
}

void insereLetra(TPalavra *palavra, TLetra letra)
{
    if (palavra->Ultimo > MAX_TAM_PALAVRA)
        return; //lista cheia
    else
    {
        palavra->palavra[palavra->Ultimo] = letra; // possivel erro
        palavra->Ultimo++;
        palavra->tamanho++;
    }
}

void removeLetra(TPalavra *palavra)
{
    palavra->Ultimo--;
    palavra->tamanho--; //possivel erro
}

void imprimePalavra(TPalavra *palavra)
{
    int i;
    for (i = palavra->Primeiro; i < palavra->Ultimo; i++)
        printf("%c", palavra->palavra[i].letra);
}

int tamanhoPalavra(TPalavra *palavra)
{
    return palavra->tamanho;
}