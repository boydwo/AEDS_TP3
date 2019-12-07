#include "TAD_PalavraLE.h"
typedef struct TCelulaTe *Apont;
typedef struct TCelulaTe{
    TPalavra pPPalavra;
    Apont pProx, pAnt;
}TCelulaTexto;

typedef struct{
    Apont pPrimeiro;
    Apont pUltimo;
    int TamTexto;
}TTexto;

void inicializaTexto(TTexto* pTexto);
void insereTexto(TTexto* pTexto, TPalavra pPPalavra);
void removeTexto(TTexto* pTexto, TPalavra pPPalavra);
void imprimeTexto(TTexto *pTexto);
void quickSort(TTexto *lista);
Apont partition(Apont l, Apont h) ;
void _quickSort(Apont l, Apont h) ;
void swap(TPalavra *a, TPalavra *b);

