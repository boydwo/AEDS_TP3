#include "TAD_Palavra.h"

void inicializaPalavra(TPalavra* palavra){
    palavra->Primeiro = INICIO;
    palavra->Ultimo = palavra->Primeiro;
    palavra->tamanho = 0;
}

void insereLetra(TPalavra* palavra, TLetra letra){
    if(palavra->Ultimo > MAX_TAM_PALAVRA)
        return;
    else{
        palavra->palavra[palavra->Ultimo-1] = letra;
        palavra->Ultimo++;
        palavra->tamanho++;
    }
}

void removeLetra(TPalavra* palavra){
    palavra->Ultimo--;
    palavra->tamanho--;
}

void imprimePalavra(TPalavra palavra){
    int i;
    for(i = palavra.Primeiro; i< palavra.Ultimo; i++ )
        printf("%d\n", palavra.palavra[i].letra);
}

int tamanhoPalavra(TPalavra palavra){
    return palavra.tamanho;
}