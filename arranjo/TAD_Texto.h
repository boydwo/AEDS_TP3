#include "TAD_Palavra.h"

typedef struct
{
    TPalavra texto[MAX_TAM];
    int tamanho; //quantidade de palavras
    Apontador Primeiro, Ultimo;
} TTexto;

void inicializaTexto(TTexto *texto);
void inserePalavra(TTexto *texto, TPalavra palavra);
void removePalavra(TTexto *texto);
void imprimeTexto(TTexto *texto);
int tamanhoTexto(TTexto *texto);
int comparaPalavra(TPalavra *palavra1, TPalavra *palavra2);
void Select_Sort(TTexto pTexto);
void Particao(int Esq, int Dir, int* i, int* j, TTexto pTexto);
void Ordena(int Esq, int Dir, TTexto pTexto);
void QuickSort(TTexto pTexto);
