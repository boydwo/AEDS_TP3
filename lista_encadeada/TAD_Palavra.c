#include"TAD_Palavra.h"

void inicializaPalavra(TPalavra* palavra){
    palavra->pPrimeiro = (Apontador) malloc(sizeof(TCelula));
    palavra->pUltimo = palavra->pPrimeiro;
    palavra->pPrimeiro->pProx = NULL;
}

void insereLetra(TPalavra* palavra, TLetra* letra){
    palavra->pUltimo->pProx = (Apontador) malloc(sizeof(TCelula));
    palavra->pUltimo = palavra->pUltimo->pProx;
    palavra->pUltimo->Item = *letra;
    palavra->pUltimo->pProx = NULL;
}

void removeLetra(TPalavra* palavra){

}

void imprimePalavra(TPalavra* palavra){
    Apontador pAux;
    pAux = palavra->pPrimeiro->pProx;
    while (pAux != NULL)
    {
    printf("%d\n", pAux->letra.letra);
    pAux = pAux->pProx;
    }
}

Apontador tamanhoPalavra(TPalavra* palavra){
    return palavra.pUltimo.tamanho;
}