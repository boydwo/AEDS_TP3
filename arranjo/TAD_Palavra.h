#define MAX_TAM_PALAVRA 10
#define MAX_TAM 1000
#define INICIO 0
#include <stdlib.h>
#include <stdio.h>

typedef char TChave;

typedef int Apontador;

typedef struct
{
    TChave letra;
} TLetra;
typedef struct
{
    TLetra palavra[MAX_TAM_PALAVRA];
    int tamanho; //quantidade de letras
    Apontador Primeiro, Ultimo;
} TPalavra;

void inicializaPalavra(TPalavra *palavra);
void insereLetra(TPalavra *palavra, TLetra letra);
void removeLetra(TPalavra *palavra);
void imprimePalavra(TPalavra *palavra);
int tamanhoPalavra(TPalavra *palavra);
