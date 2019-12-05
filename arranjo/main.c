#include "./TAD_Biblioteca.h"

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
    printf("Digite a quantidade de palavra do texto %d: ", j + 1);
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
  imprimeBiblioteca(&bbt);

  printf(" \n                  SELECIONE O TIPO DE DADOS?              \n");
  printf("\n");
  printf("   1 - Arranjo                                             \n");
  printf("   2 - Lista Encadeada                                     \n");
  printf(" ********************************************************* \n");
  scanf("%d", &tipoDado);

  switch (tipoDado)
  {
  case 1:
    do
    {
      printf(" Entre com uma opcao: \n");
      printf("   1 - Recriar Biblioteca                                    \n");
      printf("   --------------------------------------------------------- \n");
      printf("   2 - Imprimir Biblioteca                                   \n");
      printf("   3 - SelectionSort                                         \n");
      printf("   4 - QuickSort                                             \n");
      printf("   5 - Sair                                                  \n ");
      printf(" ************************************************* ********* \n");
      printf(" SELECIONE A OPCAO: ");

      scanf("%d", &opcao);
      switch (opcao)
      {
      case 1:

        inicializaBiblioteca(&bbt);
        printf("\nDigite a quantidade de textos: ");
        scanf("%d", &tamBiblioteca);
        for (j = 0; j < tamBiblioteca; j++)
        {
          inicializaTexto(&pTexto);
          printf("Digite a quantidade de palavra do texto %d: ", j + 1);
          scanf("%d", &tamTexto);
          int i, cont = 0, ALL;
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
        imprimeBiblioteca(&bbt);
      case 2:
        // caso 3 - Ordena Seleção
      case 3:
        do
        {
          printf("   1 - Ordenar TOOS os Texto      \n");
          printf("   2- Ordernar Biblioteca \n");
          scanf("%d", &opcao);
          switch (opcao)
          {
          case 1:
            for (int i; i < tamBiblioteca; i++)
            {
              Select_Sort(bbt.biblioteca[i]);
            }
            break;

          case 2:
            Select_Sort_bbt(bbt);
            break;
          default:
            break;
          }
        } while (opcao != 5);
      case 4:
        printf("   1 - Ordenar TOOS os Texto      \n");
        printf("   2- Ordernar Biblioteca \n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
          for (int i; i < tamBiblioteca; i++)
          {
            QuickSort(bbt.biblioteca[i]);
          }
          break;

        case 2:
          QuickSort_bbt(bbt);
          break;
        default:
          break;
        }
      }
      while (opcao != 5)
        ;

      //-------------------------------------------------------------------------
    } while (opcao != 5);
  }
}
