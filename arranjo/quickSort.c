#include<stdio.h> 
#include "TAD_Biblioteca.h"
  
//ordena texto
void QuickSort(TTexto pTexto, int n){
    Ordena(INICIO, MAX_TAM - 1, pTexto);
}

void Ordena(int Esq, int Dir, TTexto pTexto){
    int i, j;
    Particao(Esq, Dir, &i, &j, pTexto);
    if(Esq < j){
        Ordena(Esq, j, pTexto);
    }
    if(i < Dir){
        Ordena(i, Dir, pTexto);
    }
}

void Particao(int Esq, int Dir, int* i, int* j, TTexto pTexto){
    TPalavra pivo, aux;
    *i = Esq;
    *j = Dir;
    pivo = pTexto.texto[(*i + *j)/2];

    do{
        while(pivo.palavra > pTexto.texto[*i].palavra){
            (*i)++;
        }
        while(pivo.palavra < pTexto.texto[*j].palavra){
            (*j)++;
        }
        if(*i <= *j){
            aux = pTexto.texto[*i];
            pTexto.texto[*i] = pTexto.texto[*j];
            pTexto.texto[*j] = aux;
            (*i)++;
            (*j)--;
        }while(*i <= *j);
    }
}