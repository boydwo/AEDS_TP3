#include "TAD_BibliotecaLE.h"
int main()
{
    int TamPalavra, i, TamTexto, cont = 0, QntTexto, j, somaQnt, opcao, tipoDado, tamBiblioteca,k;
    TPalavra pPalavra;
    TItemLetra LetraAll;
    TTexto pTexto;
    TBiblioteca pBbt;
    char ALL;
    imprimeBbt(&pBbt);
    printf("                   SELECIONE O TIPO DE DADOS?              \n");
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
            printf("   1 - Criar Biblioteca                                    \n");
            printf("   2 - Imprimir texto                                      \n");
            printf("   3 - Escolher com Selecao                                 \n");
            printf("   4 - Classificar com QuickSort                               \n");
            printf("   5 - Sair                                                \n ");
            printf(" ************************************************* ********** \n");
            printf(" SELECIONE A OPCAO: ");
            scanf("%d", &opcao);
            switch (opcao)
            {
            case 1:
                printf(" Qual o tamanho da biblioteca (quantos textos possui): ");
                scanf("%d", &tamBiblioteca);
                printf("\n");
                printf(" digite o tamanho máximo de um texto nessa biblioteca: ");

            // caso 2 - imprime texto
            case 2:
                break;
            // caso 3 - Ordena Seleção
            case 3:
                break;
            // caso 4 - Ordena Quick_Sort
            case 4:
                break;
            case 5:
                printf("   SAIU\n");
                return 0;
            default:
                printf("   ERRO\n");
                break;
            }
        } while (opcao != 5);
    case 2:
        do
        {
            printf(" Entre com uma opcao: \n");
            printf("   1 - Criar Biblioteca                                    \n");
            printf("   2 - Imprimir texto(s)                                   \n");
            printf("   3 - Escolher com Selecao                                \n");
            printf("   4 - Classificar com QuickSort                           \n");
            printf("   5 - Sair                                                \n");
            printf(" **********************************************************\n");
            printf(" SELECIONE A OPCAO: ");
            scanf("%d", &opcao);
            switch (opcao)
            {
            case 1:
                printf(" Qual o tamanho da biblioteca (quantos textos possui): ");
                scanf("%d", &tamBiblioteca);
                for ( k = 0; k < tamBiblioteca; k++ )
                {
                    inicializaBbt(&pBbt);
                    printf("\nDigite a quantidade de textos: ");
                    scanf("%d", &QntTexto);
                    somaQnt = 0;
                    for (j = 0; j < QntTexto; j++)
                    {
                        cont = 0;
                        inicializaTexto(&pTexto);
                        printf("Digite a quantidade de palavra: ");
                        scanf("%d", &TamTexto);
                        somaQnt = somaQnt + TamTexto;
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
                            insereTexto(&pTexto, pPalavra);
                            cont++;
                        } while (cont != TamTexto);
                        insereBbt(&pBbt, pTexto);
                    }
                }
                break;
            // caso 2 - imprime texto
            case 2:
                imprimeBbt(&pBbt);
                break;
            // caso 3 - Ordena Seleção
            case  3 :
                break;
            // caso 4 - Ordena Quick_Sort
            case  4 :
                 break;
            case 5:
                printf("   SAIU\n");
                break;
            default:
                printf("   ERRO\n");
                break;
            }
        }while (opcao != 5);
    }    
    return 0;
}




   // int TamPalavra, i, TamTexto, cont = 0, QntTexto, j, somaQnt, tamBiblioteca;
    // TPalavra pPalavra;
    // TItemLetra LetraAll;
    // TTexto pTexto;
    // TBiblioteca pBbt;
    // char ALL;
    // inicializaBbt(&pBbt);
    // printf("\nDigite a quantidade de textos: ");
    // scanf("%d",&QntTexto);
    // somaQnt=0;
    //  for(j=0;j<QntTexto;j++){
    //      cont=0;
    //     inicializaTexto(&pTexto);
    //     printf("Digite a quantidade de palavra: ");
    //     scanf("%d",&TamTexto);
    //         somaQnt= somaQnt+TamTexto;
    //     do{
    //         inicializaPalavra(&pPalavra);
    //         TamPalavra = 1 + rand ()% 7 ;
    //         for(i=0;i<TamPalavra;i++){
    //             ALL = ('a'+( rand ()% 26 ));
    //             LetraAll.letra = ALL;
    //             insereLetra( &pPalavra ,LetraAll);
    //         }
    //         insereTexto(&pTexto,pPalavra);
    //         cont++;
    //     }while(cont != TamTexto);
    //     // Apont pAuxTex;
    //     // pAuxTex = pTexto.pPrimeiro;
    //     // while (pAuxTex != NULL)
    //     // {
    //     //     quickSort(&pAuxTex->pPPalavra);
    //     //     pAuxTex = pAuxTex->pProx;
    //     // }
    //     insereBbt(&pBbt,pTexto);
    //  }

    //  imprimeBbt(&pBbt);
    // //  Apon pAuxBbt;
    // //  pAuxBbt= pBbt.pPrimeiro->pProx;
    // //  while (pAuxBbt != NULL)
    // //  {
    // //      quickSort(&pAuxBbt.pPTexto);
    // //      pAuxBbt = pAuxBbt->pProx;
    // //   } 
    //  imprimeBbt(&pBbt);
 