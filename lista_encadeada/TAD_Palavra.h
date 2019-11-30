#include <stdlib.h>
#include <stdio.h>


typedef char TChave;
typedef struct{
    TChave letra;
}TLetra;

typedef TCelula* Apontador;
typedef struct{
    TLetra letra;
    Apontador pProx;
    int tamanho;            //guarda um acumulador para calcular o tamanho pegando o valor que está no ultimo item
}TCelula;

typedef struct{
    Apontador pPrimeiro;
    Apontador pUltimo;
}TPalavra;

void inicializaPalavra(TPalavra* palavra);
void insereLetra(TPalavra* palavra, TLetra letra);
void removeLetra(TPalavra* palavra);
void imprimePalavra(TPalavra palavra);
int tamanhoPalavra(TPalavra palavra);