#include "TAD_Texto.h"

typedef struct
{
    TTexto biblioteca[MAX_TAM]; //Erro de tamanhao wtf
    Apontador Primeiro, Ultimo;
} TBiblioteca;

void inicializaBiblioteca(TBiblioteca *biblioteca);
void insereTexto(TBiblioteca *biblioteca, TTexto texto);
void removetexto(TBiblioteca *biblioteca);
int tamanhoBiblioteca(TBiblioteca *biblioteca);
int imprimeBiblioteca(TBiblioteca *biblioteca);
void Select_Sort_bbt(TBiblioteca pBbt);
int comparaBbbt(TTexto *texto1, TTexto *texto2);

//quick bbt
void Particao_bbt(int Esq, int Dir, int *i, int *j, TBiblioteca *Bbt);
void Ordena_bbt(int Esq, int Dir, TBiblioteca *pBbt);
void QuickSort_bbt(TBiblioteca pBbt);
