#ifndef TAD_PALAVRA_H_INCLUDED
#define TAD_PALAVRA_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char letra;
}TItemLetra;
typedef struct Celula *Apontador;
typedef struct Celula{
    TItemLetra Letra;
    Apontador pProx;
}TCelula;

typedef struct{
    Apontador pPrimeiro;
    Apontador pUltimo;
    int tamanho; //guarda um acumulador para calcular o tamanho pegando o valor que est� no ultimo item
}TPalavra;
void inicializaPalavra(TPalavra *pPalavra);
void insereLetra(TPalavra *pPalavra,TItemLetra pLetra);
void removeLetra(TPalavra *pPalavra, TItemLetra pLetra);
void imprimePalavra(TPalavra *pPalavra);
int tamanhoPalavra(TPalavra* pPalavra);



#endif // TAD_PALAVRA_H_INCLUDED
