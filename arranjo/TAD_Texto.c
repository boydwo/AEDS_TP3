#include "TAD_Texto.h"

void inicializaTexto(TTexto *texto)
{
    texto->Primeiro = INICIO;
    texto->Ultimo = texto->Primeiro;
    texto->tamanho = 0;
}

void inserePalavra(TTexto *texto, TPalavra palavra)
{
    if (texto->Ultimo > MAX_TAM)
        return;
    else
    {
        texto->texto[texto->Ultimo] = palavra;
        texto->Ultimo++;
        texto->tamanho++;
    }
}

void removePalavra(TTexto *texto)
{
    texto->Ultimo--;
    texto->tamanho--;
}

void imprimeTexto(TTexto *texto)
{
    int i;
    for (i = 0; i < texto->tamanho; i++)
    {
        imprimePalavra(&texto->texto[i]);
        printf(" ");
    }
    printf(" \n");
}

int tamanhoTexto(TTexto *texto)
{
    return texto->tamanho;
}

// ordena texto
int comparaPalavra(TPalavra *palavra1, TPalavra *palavra2)
{
    int index;
    for (index = 0; index < palavra1->tamanho; index++)
    {
        if (palavra1->palavra[index].letra > palavra2->palavra[index].letra)
        {
            return 1; //palavra 1 maior q palavra 2
        }
        else if (palavra1->palavra[index].letra < palavra2->palavra[index].letra)
        {
            return 0;
        }
        return -1; //palavra igual
    }
}

void Select_Sort(TTexto pTexto)
{
    int menor;
    int i;
    int j;
    TPalavra aux;

    int result;

    for (i = INICIO; i < pTexto.Ultimo - 1; i++) // Percorre todo o vetor até TAM-1, pois a ultima posição não precisa testar pois ja estara ordenada;
    {
        menor = i; // Menor valor recebe a posição que está passando;

        for (j = i + 1; j < pTexto.Ultimo; j++) // Percorre o vetor da posição i+1 até o final;
        {
            //chamando funcao compara
            result = comparaPalavra(&pTexto.texto[j], &pTexto.texto[menor]);
            if (result == 0) // Testa se a posição que está passando é menor que o menor valor;
            {
                menor = j; // vMenor recebe a posição do menor valor;
            }
        }

        aux = pTexto.texto[menor];
        pTexto.texto[menor] = pTexto.texto[i];
        pTexto.texto[i] = aux;
    }
    imprimeTexto(&pTexto);
}