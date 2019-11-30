#include "TAD_Texto.h"

void inicializaTexto(TTexto* texto){
    texto->Primeiro = INICIO;
    texto->Ultimo = texto->Primeiro;
    texto->tamanho = 0;
}

void inserePalavra(TTexto* texto, TPalavra palavra){
    if(texto->Ultimo > MAX_TAM)
        return;
    else{
        texto->texto[texto->Ultimo-1] = palavra;
        texto->Ultimo++;
        texto->tamanho++;
    }
}

void removePalavra(TTexto* texto){
    texto->Ultimo--;
    texto->tamanho--;
}

void imprimeTexto(TTexto texto){
    int i;
    for(i = texto.Primeiro; i< texto.Ultimo; i++ )
        printf("%d\n", texto.texto[i].palavra);
}

int tamanhoTexto(TTexto texto){
    return texto.tamanho;
}
