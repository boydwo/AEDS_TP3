#include "TAD_Texto.h"

int main()
{
  int TamPalavra, i, TamTexto, cont = 0;
  TPalavra pPalavra;
  TLetra LetraAll;
  TTexto pTexto;

  inicializaTexto(&pTexto);
  char ALL;
  printf("Digite a quantidade de palavra: ");
  scanf("%d", &TamTexto);
  //vetor palavra
  int TamPal[TamTexto];
  do
  {
    inicializaPalavra(&pPalavra);
    TamPalavra = 1 + rand() % 7;
    for (i = 0; i < TamPalavra; i++)
    {
      ALL = ('a' + (rand() % 26));
      LetraAll.letra = ALL;
      insereLetra(&pPalavra, LetraAll);
    }

    inserePalavra(&pTexto, pPalavra);
    TamPal[cont] = tamanhoPalavra(&pPalavra);
    cont++;
  } while (cont != TamTexto);
  imprimeTexto(&pTexto);

  return 0;
}