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
void imprimeTexto(TTexto texto);
int tamanhoTexto(TTexto texto);
