#include "TAD_PalavraLE.h"

void inicializaPalavra(TPalavra* pPalavra){
    pPalavra->pPrimeiro = (Apontador)malloc(sizeof(TCelula));
    pPalavra->pUltimo = pPalavra->pPrimeiro;
    pPalavra->pPrimeiro->pProx = NULL;
    pPalavra->tamanho = 0;
}

void insereLetra(TPalavra *pPalavra,  TItemLetra pLetra){
    pPalavra->pUltimo->pProx = (Apontador)malloc(sizeof(TCelula));
    pPalavra->pUltimo = pPalavra->pUltimo->pProx;
    pPalavra->pUltimo->Letra = pLetra;
    pPalavra->pUltimo->pProx = NULL;
    pPalavra->tamanho++;

}

//pode negligenciar o metodo retira ate todo o programa estar funcionando
//ja q nao vai usar isso quase nunca a nao ser para testar2
//obs pode negligenciar mas deve ser feito. ass vinicius
void removeLetra(TPalavra* palavra, TItemLetra pLetra){

}

void imprimePalavra(TPalavra *pPalavra){
    Apontador pAux;
    pAux = pPalavra->pPrimeiro->pProx;
    while (pAux != NULL)
    {
        printf("%c", pAux->Letra.letra);
        pAux = pAux->pProx;
        
    }
     printf("\n");
}


int tamanhoPalavra(TPalavra* pPalavra){
    return pPalavra->tamanho;
}

