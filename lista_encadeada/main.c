#include "TAD_Biblioteca.h"
int  main ()
{   
    int TamPalavra,i,TamTexto,cont=0,QntTexto,j,somaQnt;
    TPalavra pPalavra;
    TItemLetra LetraAll;
    TTexto pTexto;
    TBiblioteca pBbt,pCopiaBbt;
    char ALL;
    inicializaBbt(&pBbt);
    inicializaBbt(&pCopiaBbt);
    printf("\nDigite a quantidade de textos: ");
    scanf("%d",&QntTexto);
    somaQnt=0;
     for(j=0;j<QntTexto;j++){
         cont=0;
        inicializaTexto(&pTexto);
        printf("Digite a quantidade de palavra: ");
        scanf("%d",&TamTexto);
            somaQnt= somaQnt+TamTexto;
        do{
            inicializaPalavra(&pPalavra);
            TamPalavra = 1 + rand ()% 7 ;
            for(i=0;i<TamPalavra;i++){
                ALL = ('a'+( rand ()% 26 ));
                LetraAll.letra = ALL;
                insereLetra( &pPalavra ,LetraAll);
            }
            insereTexto(&pTexto,pPalavra);
            cont++;
        }while(cont != TamTexto);
        insereBbt(&pBbt,pTexto);
        insereBbt(&pCopiaBbt,pTexto);
     }
     printf("Bilioteca desordenado:\n");
     imprimeBbt(&pBbt);   



//
//    int opcao, tipoDado, tamBiblioteca,tamMinTexto, tamMaxTexo;
//    printf ( "                 Trabalho Pratico 03 - AEDS 1             \n" );
//    printf ( "              Lucas Takeshi Moreira Chang - 2665          \n" );
//    printf ( "             Marcos Tulio Rodrigues Almeida - 3504        \n" );
//    printf ( "            Victor Hugo Rezende dos Santos - 3510         \n" );
//    printf ( "                                                         \n" );
//    printf ( "                   SELECIONE O TIPO DE DADOS?              \n" );
//    printf ( "\n" );
//    printf ( "   1 - Arranjo                                             \n" );
//    printf ( "   2 - Lista Encadeada                                     \n" );
//    printf ( " ********************************************************* \n" );
//    scanf ( "%d" ,&tipoDado);
//    switch (tipoDado){
//          case 1:
//              do{
//                printf ( " Entre com uma opcao: \n" );
//                printf ( "   1 - Criar Biblioteca                                    \n" );
//                printf ( "   2 - Imprimir texto                                      \n" );
//                printf ( "   3 - Escolher com Selecao                                 \n" );
//                printf ( "   4 - Classificar com QuickSort                               \n" );
//                printf ( "   5 - Sair                                                \n ");
//                printf ( " ************************************************* ********** \n" );
//                printf ( " SELECIONE A OPCAO: " );
//                scanf ( "%d" , &opcao);
//              switch (opcao){
//                  case  1 :
//                    printf ( " Qual o tamanho da biblioteca (quantos textos possui): " );
//                    scanf ( "%d" , &tamBiblioteca);
//                    printf ( "\n" );
//                    printf ( " digite o tamanho mínimo de um texto nessa biblioteca: " );
//                    scanf ( "%d" , &tamMinTexto);
//                    printf ( "\n" );
//                    printf ( " digite o tamanho máximo de um texto nessa biblioteca: " );
//                    scanf ( "%d" , &tamMaxTexo);
//                    printf ( "\n" );
//                    // caso 2 - imprime texto
//                    case  2 :
//
//                    // caso 3 - Ordena Seleção
//                    case  3 :
//
//                    // caso 4 - Ordena Quick_Sort
//                    case  4 :
//
//                    case 5:
//                        printf ( "   SAIU\n");
//                    return 0;
//                    default :
//                    printf ( "   ERRO\n");
//                    break;
//            }
//
//        }while(opcao != 5);
//        case 2:
//              do{
//                printf ( " Entre com uma opcao: \n" );
//                printf ( "   1 - Criar Biblioteca                                    \n" );
//                printf ( "   2 - Imprimir texto                                      \n" );
//                printf ( "   3 - Escolher com Selecao                                 \n" );
//                printf ( "   4 - Classificar com QuickSort                               \n" );
//                printf ( "   5 - Sair                                                \n ");
//                printf ( " ************************************************* ********** \n" );
//                printf ( " SELECIONE A OPCAO: " );
//                scanf ( "%d" , &opcao);
//              switch (opcao){
//                  case  1 :
//                    printf ( " Qual o tamanho da biblioteca (quantos textos possui): " );
//                    scanf ( "%d" , &tamBiblioteca);
//                    printf ( "\n" );
//                    printf ( " digite o tamanho mínimo de um texto nessa biblioteca: " );
//                    scanf ( "%d" , &tamMinTexto);
//                    printf ( "\n" );
//                    printf ( " digite o tamanho máximo de um texto nessa biblioteca: " );
//                    scanf ( "%d" , &tamMaxTexo);
//                    printf ( "\n" );
//                    // caso 2 - imprime texto
//                    case  2 :
//
//                    // caso 3 - Ordena Seleção
//                    case  3 :
//
//                    // caso 4 - Ordena Quick_Sort
//                    case  4 :
//
//                    case 5:
//                        printf ( "   SAIU\n");
//                    return 0;
//                    default :
//                    printf ( "   ERRO\n");
//                    break;
//            }
//
//        }while(opcao != 5);
//    }

    return  0 ;
}
// typedef struct lista {
//     elemento valor;
//     struct lista *prox;
// } tlista;

// int impl_cmp(elemento a, elemento b);

// void partition(tlista *lista, elemento pivot, tlista **l_ret, tlista **ge_ret) {
//     tlista *l_tail = NULL;
//     tlista *ge_tail = NULL;

//     tlista *atual = lista;

//     while (atual != NULL) {
//         tlista *prox = atual->prox;

//         atual->prox = NULL;
//         if (impl_cmp(atual->valor, pivot) < 0) {
//             if (l_tail == NULL) {
//                  l_tail = atual;
//                  *l_ret = l_tail;
//             } else {
//                 l_tail->prox = atual;
//                 l_tail = atual;
//             }
//         } else {
//             if (ge_tail == NULL) {
//                  ge_tail = atual;
//                  *ge_ret = ge_tail;
//             } else {
//                 ge_tail->prox = atual;
//                 ge_tail = atual;
//             }
//         }
//         atual = prox;
//     }
// }

// tlista *concatena_3_listas(tlista *a, tlista *b, tlista *c) {
//     tlista *head = a;
//     tlista *tail = head;

//     if (head != NULL) {
//         head = tail = b;
//     } else {
//         while (tail->prox != NULL)  {
//             tail = tail->prox;
//         }
//         tail->prox = b;
//     }

//     if (head != NULL) {
//         head = tail = c;
//     } else {
//         while (tail->prox != NULL)  {
//             tail = tail->prox;
//         }
//         tail->prox = c;
//     }

//     return head;
// }

// tlista *quicksort(tlista *lista) {
//     /* vou pegar como pivot sempre o primeiro da lista, removendo-o de lá; poderia usar outra técnica, mas essa é boa o suficiente para o exemplo */
//    tlista *pivot_lista = lista;
//    elemento pivot = pivot_lista->valor;

//    lista = lista->prox;
//    pivot_lista->prox = NULL;

//    tlista *menor, *maior;

//    menor = maior = NULL;

//    partition(lista, pivot, &menor, &maior);

//    menor = quicksort(menor);
//    maior = quicksort(maior);

//   return concatena_3_listas(menor, pivot_lista, maior);
// }