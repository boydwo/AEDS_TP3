#include "TAD_Palavra.h"

// Declaração das Bibliotecas;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10                  // Define o tamanho do vetor;
#define TAM 10                  // Define o tamanho do vetor;
void fSelect_Sort(int *pVetor); // Declara a função select sort;

int main(void)
{
  int vVetor[TAM]; // Declara o vetor
  int i;

  for (i = 0; i < TAM; i++)
  {
    vVetor[i] = (rand() % 89) + 10; // Preenche o vetor aleatóriamente;
    printf(" %d,", vVetor[i]);
  }

  fSelect_Sort(vVetor); // Chama a função de Ordenação;

  printf("\n\n");

  for (i = 0; i < TAM; i++)
  {
    printf(" %d,", vVetor[i]);
  }

  printf("\n\n ");
  system("pause");
  return 0;
}

void fSelect_Sort(int *pVetor)
{
  int vMenor;
  int i;
  int vTemp;
  int vTroca;

  for (i = 0; i < TAM - 1; i++) // Percorre todo o vetor até TAM-1, pois a ultima posição não precisa testar pois ja estara ordenada;
  {
    vMenor = i; // Menor valor recebe a posição que está passando;

    for (vTemp = i + 1; vTemp < TAM; vTemp++) // Percorre o vetor da posição i+1 até o final;
    {
      if (pVetor[vTemp] < pVetor[vMenor]) // Testa se a posição que está passando é menor que o menor valor;
      {
        vMenor = vTemp; // vMenor recebe a posição do menor valor;
      }
    }

    if (vMenor != i) // Se a posição for diferente da que está passando, ocorre a troca;
    {
      vTroca = pVetor[i];
      pVetor[i] = pVetor[vMenor];
      pVetor[vMenor] = vTroca;
    }
  }
}