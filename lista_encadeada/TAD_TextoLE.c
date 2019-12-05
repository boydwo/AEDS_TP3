#include "TAD_TextoLE.h"
void inicializaTexto(TTexto* pTexto){
    pTexto->pPrimeiro = (Apont)malloc(sizeof(TCelulaTexto));
    pTexto->pUltimo = pTexto->pPrimeiro;
    pTexto->pPrimeiro->pAnt=NULL;
    pTexto->pPrimeiro->pProx= NULL;
}
void insereTexto(TTexto* pTexto, TPalavra pPPalavra){
    pTexto->pUltimo->pProx = (Apont)malloc(sizeof(TCelulaTexto));
    pTexto->pUltimo->pProx->pAnt = pTexto->pUltimo;
    pTexto->pUltimo = pTexto->pUltimo->pProx;
    pTexto->pUltimo->pPPalavra = pPPalavra;
    pTexto->pUltimo->pProx = NULL;
    pTexto->TamTexto++;
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

int comparacao (TPalavra *palavra1,TPalavra *palavra2){
    Apontador aux1 = palavra1->pPrimeiro->pProx;
    Apontador aux2 = palavra2->pPrimeiro->pProx;
    while(aux1 != NULL)
    {
        if(aux1->Letra.letra > aux2->Letra.letra) 
        {
            return 1; // a palavra 1 é maior q a palavra 2d
        } 
        else if (aux1->Letra.letra < aux2->Letra.letra)
        {
            return 0; //a palavra 2 é maior q a palavra 1
        } 
        else 
        {
            aux1 = aux1->pProx;
            aux2 = aux2->pProx;
            //as letras sao iguais, verifica a proxima letra
        }
    }
    return -1; // as palavras sao iguais
}

Apont partition(Apont l, Apont h)
{   
    TPalavra x = h->pPPalavra;
    Apont i = l->pAnt;
    for (Apont j = l; j != h; j = j->pProx)
    {
        if (comparacao(&j->pPPalavra, &x) == 0 || comparacao(&j->pPPalavra, &x) == -1)
        {
            i = (i == NULL) ? l : i->pProx;

            swap(&i->pPPalavra, &j->pPPalavra);
        }
    }
    i = (i == NULL) ? l : i->pProx;
    swap(&i->pPPalavra, &h->pPPalavra);
    return i;
}
void _quickSort(Apont l, Apont h)
{
    if (h != NULL && l != h && l != h->pProx)
    {
        Apont p = partition(l, h);
        _quickSort(l, p->pAnt);
        _quickSort(p->pProx, h);
    }
}
void quickSort(TTexto *lista)
{
    _quickSort(lista->pPrimeiro, lista->pUltimo);
}

void swap(TPalavra *a, TPalavra *b)
{
    TPalavra t = *a;
    *a = *b;
    *b = t;
}