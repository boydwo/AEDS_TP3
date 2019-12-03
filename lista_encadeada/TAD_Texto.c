#include "TAD_Texto.h"
void inicializaTexto(TTexto* pTexto){
    pTexto->pPrimeiro = (Apont)malloc(sizeof(TCelulaTexto));
    pTexto->pUltimo = pTexto->pPrimeiro;
    pTexto->pPrimeiro->pProx= NULL;

}
void insereTexto(TTexto* pTexto, TPalavra pPPalavra){
    pTexto->pUltimo->pProx = (Apont)malloc(sizeof(TCelulaTexto));
    pTexto->pUltimo = pTexto->pUltimo->pProx;
    pTexto->pUltimo->pPPalavra = pPPalavra;
    pTexto->pUltimo->pProx = NULL;

}

void removeTexto(TTexto* pTexto, TPalavra pPPalavra){

}

void imprimeTexto(TTexto *pTexto){
    Apont pAux;
    pAux = pTexto->pPrimeiro->pProx;
    while (pAux != NULL)
    {
        imprimePalavra(&pAux->pPPalavra);
        pAux = pAux->pProx;
    }
    
}

