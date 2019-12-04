#include "TAD_Texto.h"

// Declaração das Bibliotecas;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void fSelect_Sort(int *pTexto);

int main(void)
{
  TTexto texto[TAM];
  int i;

  fSelect_Sort(&texto);
  return 0;
}
int compara(TPalavra *palavra1, TPalavra *palavra2)
{
  int index;
  for (index = 0; index < palavra1->tamanho; index++)
  {
    if (palavra1->palavra[index].letra > palavra2->palavra[index].letra)
    {
      return 1; //palavra 1 maior q palavra 2
    }
    else if (palavra1->palavra[index].letra < palavra2->palavra[index].letra)
    {
      return 0;
    }
    return -1; //palavra igual
  }

  void fSelect_Sort(int *pTexto)
  {
    int menor;
    int i;
    int j;
    int troca;

    for (i = 0; i < TAM - 1; i++) // Percorre todo o vetor até TAM-1, pois a ultima posição não precisa testar pois ja estara ordenada;
    {
      menor = i; // Menor valor recebe a posição que está passando;

      for (j = i + 1; j < TAM; j++) // Percorre o vetor da posição i+1 até o final;
      {
        if (pTexto < pTexto) // Testa se a posição que está passando é menor que o menor valor;
        {
          menor = j; // vMenor recebe a posição do menor valor;
        }
      }

      if (menor != i) // Se a posição for diferente da que está passando, ocorre a troca;
      {
        troca = pTexto[i];
        pTexto[i] = pTexto[menor];
        pTexto[menor] = troca;
      }
    }
  }