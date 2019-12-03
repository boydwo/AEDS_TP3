#ifndef TAD_TEXTO_H_INCLUDED
#define TAD_TEXTO_H_INCLUDED
#include "TAD_Palavra.h"
typedef struct TCelulaTe *Apont;
typedef struct TCelulaTe{
    TPalavra pPPalavra;
    Apont pProx;
}TCelulaTexto;

typedef struct{
    Apont pPrimeiro;
    Apont pUltimo;
}TTexto;

void inicializaTexto(TTexto* pTexto);
void insereTexto(TTexto* pTexto, TPalavra pPPalavra);
void removeTexto(TTexto* pTexto, TPalavra pPPalavra);
void imprimeTexto(TTexto *pTexto);



#endif // TAD_TEXTO_H_INCLUDED
