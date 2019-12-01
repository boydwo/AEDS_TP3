#include "Arranjo/TAD_Biblioteca.h"
#include <stdio.h>
#include <stdlib.h>

TLetra LetraAleatoria()
{
  TLetra Letra;
  Letra.letra = 97 + (char)(rand() % 26);
  return Letra;
}

int main()
{

  int opcao;
  int tipoDado;
  int tamBiblioteca;
  int tamMinTexto;
  int tamMaxTexo;
  printf(" ********************************************************\n");
  printf("                Trabalho Prático 03 – AEDS 1             \n");
  printf("             Lucas Takeshi Moreira Chang - 2665          \n");
  printf("            Marcos Túlio Rodrigues Almeida - 3504        \n");
  printf("           Victor Hugo Rezende dos Santos - 3510         \n");
  printf("                                                         \n");
  printf("  1 - Criar Biblioteca                                   \n");
  printf("  2 - Imprimir texto                                     \n");
  printf("  3 - Ordenar com Seleçao                                \n");
  printf("  4 - Ordenar com QuickSort                              \n");
  printf("  5 - Sair                                               \n");
  printf(" ******************************************************* \n");
  printf("SELECIONE A OPÇÃO: ");
  scanf("%d", &opcao);

  printf("                  SELECIONE O TIPO DE DADOS?             \n");
  printf("                                                         \n");
  printf("  1 - Arranjo                                            \n");
  printf("  2 - Lista Encadeada                                    \n");
  printf(" ******************************************************* \n");
  printf("Entre com uma opcao: ");
  scanf("%d", &tipoDado);

  switch (opcao)
  {
  case 1:
    printf("Qual o tamanho da biblioteca ( quantos textos possui): ");
    scanf("%d", &tamBiblioteca);
    printf("\n");
    printf("digite o tamanho minimo de um texto nessa biblioteca: ");
    scanf("%d", &tamMinTexto);
    printf("\n");
    printf("digite o tamanho maximo de um texto nessa biblioteca: ");
    scanf("%d", &tamMaxTexo);
    printf("\n");

    //case 2 - imprime texto
  case 2:
    if (tipoDado == 1)
    {
    }
    else
    {

      ;
    }
    break;

    //case 3 - Ordena Seleção
  case 3:

    if (tipoDado == 1)
    {
    }
    else if (tipoDado == 2)
    {
    }

    //case 4 - Ordena Quick_Sort
  case 4:

    printf("                  SELECIONE O TIPO DE DADOS?             \n");
    printf("                                                         \n");
    printf("  1 - Arranjo                                            \n");
    printf("  2 - Lista Encadeada                                    \n");
    printf(" ******************************************************* \n");
    printf("Entre com uma opcao: ");
    scanf("%d", &tipoDado);

    if (tipoDado == 1)
    {
    }
    else if (tipoDado == 2)
    {
    }

  case 5:
    return 0;
  }

  return 0;
}