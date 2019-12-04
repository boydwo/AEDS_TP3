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
int comparacao (TPalavra *palavra1,TPalavra *palavra2){
        Apontador aux1 = palavra1->pPrimeiro->pProx;
        Apontador aux2 = palavra2->pPrimeiro->pProx;
        while(aux1 != NULL){
            if(aux1->Letra.letra > aux2->Letra.letra) {
                return 1; // a palavra 1 é maior q a palavra 2d
            } else if (aux1->Letra.letra < aux2->Letra.letra) {
                return 0; //a palavra 2 é maior q a palavra 1
            } else {
                aux1 = aux1->pProx;
                aux2 = aux2->pProx;
                //as letras sao iguais, verifica a proxima letra
            }
        }

        return -1; // as palavras sao iguais
}

Apont partition(Apont head, Apont end, Apont *newHead, Apont *newEnd) 
{ 
    Apont pivot = end; 
    Apont prev = NULL, cur = head, tail = pivot; 
    while (cur != pivot) 
    { 
        if (comparacao(&cur->pPPalavra, &pivot->pPPalavra) == 0) 
        { 
            if ((*newHead) == NULL) 
                (*newHead) = cur; 
  
            prev = cur;  
            cur = cur->pProx; 
        } 
        else 
        { 
            if (prev) 
                prev->pProx = cur->pProx; 
            Apont tmp = cur->pProx; 
            cur->pProx = NULL; 
            tail->pProx = cur; 
            tail = cur; 
            cur = tmp; 
        } 
    } 
  

    if ((*newHead) == NULL) 
        (*newHead) = pivot; 
  
    (*newEnd) = tail; 
  

    return pivot; 
} 
  
  
Apont quickSortRecur(Apont head, Apont end) 
{ 
    if (!head || head == end) 
        return head; 
  
    Apont newHead = NULL, newEnd = NULL; 
    Apont pivot = partition(head, end, &newHead, &newEnd); 
    if (newHead != pivot) 
    { 
        
        Apont tmp = newHead; 
        while (tmp->pProx != pivot) 
            tmp = tmp->pProx; 
        tmp->pProx = NULL; 
        newHead = quickSortRecur(newHead, tmp); 
        tmp = newHead->pPPalavra->pUltimo; 
        tmp->pProx = pivot; 
    } 
    pivot->pProx = quickSortRecur(pivot->pProx, newEnd); 
    return newHead; 
} 
  
void quickSort(Apont *headRef) 
{ 
    (*headRef) = quickSortRecur(*headRef, headRef->pPPalavra->pUltimo ); 
    return; 
} 

