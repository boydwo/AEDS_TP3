#include "TAD_Biblioteca.h"

int main()
{
  int TamPalavra, i, TamTexto, cont = 0, qntTexto, j;
  TPalavra pPalavra;
  TLetra LetraAll;
  TTexto pTexto;
  TBiblioteca bbt;
  printf("meu cu");
  char ALL;
  inicializaBiblioteca(&bbt);
  printf("\nDigite a quantidade de textos: ");
  scanf("%d", &qntTexto);
  for (j = 0; j < qntTexto; j++)
  {
    inicializaTexto(&pTexto);
    printf("Digite a quantidade de palavra: ");
    scanf("%d", &TamTexto);
    //vetor palavra
    //\ int TamPal[TamTexto];
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
      //TamPal[cont] = tamanhoPalavra(&pPalavra);
      cont++;
    } while (cont != TamTexto);
    insereTexto(&bbt, pTexto);
  }
  imprimeBiblioteca(&bbt);

  return 0;
}