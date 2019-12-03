#include "TAD_Biblioteca.h"
void inicializaBbt(TBiblioteca* pBbt){
    pBbt->pPrimeiro = (Apon)malloc(sizeof(TCelulaBiblioteca));
    pBbt->pUltimo = pBbt->pPrimeiro;
    pBbt->pPrimeiro->pProx= NULL;

}
void insereBbt(TBiblioteca* pBbt,TTexto pPTexto){
    pBbt->pUltimo->pProx = (Apon)malloc(sizeof(TCelulaBiblioteca));
    pBbt->pUltimo = pBbt->pUltimo->pProx;
    pBbt->pUltimo->pPTexto = pPTexto;
    pBbt->pUltimo->pProx = NULL;

}

void removeBbt(TBiblioteca* pBbt, TTexto pPTexto){

}

void imprimeBbt(TBiblioteca* pBbt){
    Apon pAux;
    pAux = pBbt->pPrimeiro->pProx;
    int i = 1;
    while (pAux != NULL)
    {
        printf("Texto %d:\n", i);
        i++;
        imprimeTexto(&pAux->pPTexto);
        pAux = pAux->pProx;
        printf("\n");
    }
}
