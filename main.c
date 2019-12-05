#include "./TAD_Biblioteca.h"
void menuOpcoes(int *tamanhoPalavra, int *tamanhoTexto, int *tamanhoBiblioteca, int *opcao, TPalavra *pPalavra, TLetra *pLetra, TTexto *pTexto, TBiblioteca *bbt);
int main()
{
  int tamPalavra, i, tamTexto, cont = 0, tamBiblioteca, j, tipoDado, opcao, ALL;
  TPalavra pPalavra;
  TLetra pLetra;
  TTexto pTexto;
  TBiblioteca bbt;

  printf("                 Trabalho Pratico 03 - AEDS 1             \n");
  printf("              Lucas Takeshi Moreira Chang - 2665          \n");
  printf("             Marcos Tulio Rodrigues Almeida - 3504        \n");
  printf("            Victor Hugo Rezende dos Santos - 3510         \n");
  printf("                                                         \n");
  //iniciando Biblioteca >>>> primeira vez
  printf("                  INICIANDO BIBLIOTECA             \n");

  inicializaBiblioteca(&bbt);
  printf("\nDigite a quantidade de textos: ");
  scanf("%d", &tamBiblioteca);
  for (j = 0; j < tamBiblioteca; j++)
  {
    inicializaTexto(&pTexto);
    printf("Digite a quantidade de palavra: ");
    scanf("%d", &tamTexto);
    cont = 0;
    do
    {
      inicializaPalavra(&pPalavra);
      tamPalavra = 1 + rand() % 7;
      for (i = 0; i < tamPalavra; i++)
      {
        ALL = ('a' + (rand() % 26));
        pLetra.letra = ALL;
        insereLetra(&pPalavra, pLetra);
      }
      inserePalavra(&pTexto, pPalavra);
      cont++;
    } while (cont != tamTexto);
    insereTexto(&bbt, pTexto);
  }

  printf(" \n                  SELECIONE O TIPO DE DADOS?              \n");
  printf("\n");
  printf("   1 - Arranjo                                             \n");
  printf("   2 - Lista Encadeada                                     \n");
  printf(" ********************************************************* \n");
  scanf("%d", &tipoDado);
  switch (tipoDado)
  {
  case 1:
    menuOpcoes(&tamPalavra, &tamTexto, &tamBiblioteca, &opcao, &tamPalavra, &pLetra, &pTexto, &bbt);
  case 2:
  }
}

void menuOpcoes(int *tamanhoPalavra, int *tamanhoTexto, int *tamanhoBiblioteca, int *opcao, TPalavra *pPalavra, TLetra *pLetra, TTexto *pTexto, TBiblioteca *bbt)
{
  do
  {
    printf(" Entre com uma opcao: \n");
    printf("   1 - Criar Biblioteca                                      \n");
    printf("   2 - Imprimir texto                                         \n");
    printf("   3 - SelectionSort                                         \n");
    printf("   4 - QuickSort                                              \n");
    printf("   5 - Sair                                                  \n ");
    printf(" ************************************************* ********** \n");
    printf(" SELECIONE A OPCAO: ");

    scanf("%d", &opcao);
    switch (*opcao)
    {
    case 1:
      printf(" Qual a quantidade de Texto: ");
      scanf("%d", &tamanhoBiblioteca);
      printf("\n");
      for (int i = 0; i < tamanhoBiblioteca; i++)
      {
        printf(" digite a quantidade de palavr:a ");
        scanf("%d", &tamanhoPalavra);
      }

    // caso 2 - imprime texto
    case 2:
      imprimeBiblioteca(&bbt);
    // caso 3 - Ordena Seleção
    case 3:

      Select_Sort(*pTexto);
    // caso 4 - Ordena Quick_Sort
    case 4:
    }

  } while (opcao != 5);
}
