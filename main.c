# include  "TAD_Palavra.h"
TItemLetra *LetraAleatoria ()
{
    char Letra;
    Letra =('a'+( rand ()% 26 ));

  return Letra;
}

int  main ()
{
    int opcao, tipoDado, tamBiblioteca,tamMinTexto, tamMaxTexo;
    printf ( "                 Trabalho Pratico 03 - AEDS 1             \n" );
    printf ( "              Lucas Takeshi Moreira Chang - 2665          \n" );
    printf ( "             Marcos Tulio Rodrigues Almeida - 3504        \n" );
    printf ( "            Victor Hugo Rezende dos Santos - 3510         \n" );
    printf ( "                                                         \n" );
    printf ( "                   SELECIONE O TIPO DE DADOS?              \n" );
    printf ( "\n" );
    printf ( "   1 - Arranjo                                             \n" );
    printf ( "   2 - Lista Encadeada                                     \n" );
    printf ( " ********************************************************* \n" );
    scanf ( "%d" ,&tipoDado);
    switch (tipoDado){
          case 1:
              do{
                printf ( " Entre com uma opcao: \n" );
                printf ( "   1 - Criar Biblioteca                                    \n" );
                printf ( "   2 - Imprimir texto                                      \n" );
                printf ( "   3 - Escolher com Selecao                                 \n" );
                printf ( "   4 - Classificar com QuickSort                               \n" );
                printf ( "   5 - Sair                                                \n ");
                printf ( " ************************************************* ********** \n" );
                printf ( " SELECIONE A OPCAO: " );
                scanf ( "%d" , &opcao);
              switch (opcao){
                  case  1 :
                    printf ( " Qual o tamanho da biblioteca (quantos textos possui): " );
                    scanf ( "%d" , &tamBiblioteca);
                    printf ( "\n" );
                    printf ( " digite o tamanho mínimo de um texto nessa biblioteca: " );
                    scanf ( "%d" , &tamMinTexto);
                    printf ( "\n" );
                    printf ( " digite o tamanho máximo de um texto nessa biblioteca: " );
                    scanf ( "%d" , &tamMaxTexo);
                    printf ( "\n" );
                    // caso 2 - imprime texto
                    case  2 :

                    // caso 3 - Ordena Seleção
                    case  3 :

                    // caso 4 - Ordena Quick_Sort
                    case  4 :

                    case 5:
                        printf ( "   SAIU\n");
                    return 0;
                    default :
                    printf ( "   ERRO\n");
                    break;
            }

        }while(opcao != 5);
        case 2:
              do{
                printf ( " Entre com uma opcao: \n" );
                printf ( "   1 - Criar Biblioteca                                    \n" );
                printf ( "   2 - Imprimir texto                                      \n" );
                printf ( "   3 - Escolher com Selecao                                 \n" );
                printf ( "   4 - Classificar com QuickSort                               \n" );
                printf ( "   5 - Sair                                                \n ");
                printf ( " ************************************************* ********** \n" );
                printf ( " SELECIONE A OPCAO: " );
                scanf ( "%d" , &opcao);
              switch (opcao){
                  case  1 :
                    printf ( " Qual o tamanho da biblioteca (quantos textos possui): " );
                    scanf ( "%d" , &tamBiblioteca);
                    printf ( "\n" );
                    printf ( " digite o tamanho mínimo de um texto nessa biblioteca: " );
                    scanf ( "%d" , &tamMinTexto);
                    printf ( "\n" );
                    printf ( " digite o tamanho máximo de um texto nessa biblioteca: " );
                    scanf ( "%d" , &tamMaxTexo);
                    printf ( "\n" );
                    // caso 2 - imprime texto
                    case  2 :

                    // caso 3 - Ordena Seleção
                    case  3 :

                    // caso 4 - Ordena Quick_Sort
                    case  4 :

                    case 5:
                        printf ( "   SAIU\n");
                    return 0;
                    default :
                    printf ( "   ERRO\n");
                    break;
            }

        }while(opcao != 5);
    }

    return  0 ;
}

