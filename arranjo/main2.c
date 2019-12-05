#include "TAD_Biblioteca.h"

int main()
{
  int TamPalavra, i, TamTexto, cont = 0, qntTexto, j;
  TPalavra pPalavra;
  TLetra LetraAll;
  TTexto pTexto;
  TBiblioteca bbt;
  char ALL;
  inicializaBiblioteca(&bbt);
  printf("\nDigite a quantidade de textos: ");
  scanf("%d", &qntTexto);
  for (j = 0; j < qntTexto; j++)
  {
    inicializaTexto(&pTexto);
    printf("Digite a quantidade de palavra: ");
    scanf("%d", &TamTexto);
    cont = 0;
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
  printf("\n8888888888888888888888888888888888888888888888888\n");
  printf("\n-----------------------bbt------------------------\n");
  Select_Sort_bbt(bbt);

  return 0;
}