#include <stdlib.h>
#include <stdio.h>
typedef struct{
    char letra; //pra q isso? a chave é so a letra, a lista inteira vai ser a palavra ass: vinicius
}TItemLetra;
typedef struct TCelula *Apontador;
typedef struct TCelula{
    TItemLetra Letra;
    Apontador pProx;
}TCelula;

typedef struct{
    Apontador pPrimeiro;
    Apontador pUltimo;
    int tamanho; //guarda um acumulador para calcular o tamanho pegando o valor que está no ultimo item
}TPalavra;

void inicializaPalavra(TPalavra *pPalavra);
void insereLetra(TPalavra *pPalavra, TItemLetra *pLetra);
void removeLetra(TPalavra *pPalavra, TItemLetra *pLetra);
void imprimePalavra(TPalavra *pPalavra);
int tamanhoPalavra(TPalavra *pPalavra);

