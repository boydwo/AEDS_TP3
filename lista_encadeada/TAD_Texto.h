#include "TAD_Palavra.h"

typedef struct{
    TPalavra palavra;
    Apontador pProx;
}TCelula;

typedef struct{
    Apontador pPrimeiro;
    Apontador pUltimo;
}TTexto;

void inicializaTexto(TTexto* texto);
void inserePalavra(TTexto* texto, TPalavra palavra);
void removePalavra(TTexto* texto);
void imprimeTexto(TTexto texto);
int tamanhoTexto(TTexto texto);