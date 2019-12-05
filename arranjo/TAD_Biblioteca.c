#include "TAD_Biblioteca.h"

void inicializaBiblioteca(TBiblioteca *biblioteca)
{
    biblioteca->Primeiro = INICIO;
    biblioteca->Ultimo = biblioteca->Primeiro;
}

void insereTexto(TBiblioteca *biblioteca, TTexto texto)
{
    if (biblioteca->Ultimo > MAX_TAM)
        return;
    else
    {
        biblioteca->biblioteca[biblioteca->Ultimo] = texto;
        biblioteca->Ultimo++;
    }
}
int imprimeBiblioteca(TBiblioteca *biblioteca)
{
    int i;
    for (i = INICIO; i < biblioteca->Ultimo; i++)
    {
        printf("TEXTO : %d  \n", i + 1);
        imprimeTexto(&biblioteca->biblioteca[i]);
        printf("\n");
    }
}

void removetexto(TBiblioteca *biblioteca)
{
}

//ordena biblioteca
int comparaBbbt(TTexto *texto1, TTexto *texto2)
{
    if (texto1->tamanho > texto2->tamanho)
    {
        return 1; //texto1 maior que texto1
    }
    else if (texto1->tamanho < texto2->tamanho)
    {
        return 0;
    }
    return -1; //igual
}

void Select_Sort_bbt(TBiblioteca pBbt)
{
    int menor;
    int i;
    int j;
    TTexto aux;
    int result;

    for (i = INICIO; i < pBbt.Ultimo - 1; i++) // Percorre todo o vetor até TAM-1, pois a ultima posição não precisa testar pois ja estara ordenada;
    {
        menor = i; // Menor valor recebe a posição que está passando;

        for (j = i + 1; j < pBbt.Ultimo; j++) // Percorre o vetor da posição i+1 até o final;
        {
            //chamando funcao compara
            result = comparaBbbt(&pBbt.biblioteca[j], &pBbt.biblioteca[menor]);
            if (result == 0) // Testa se a posição que está passando é menor que o menor valor;
            {
                menor = j; // vMenor recebe a posição do menor valor;
            }
        }

        aux = pBbt.biblioteca[menor];
        pBbt.biblioteca[menor] = pBbt.biblioteca[i];
        pBbt.biblioteca[i] = aux;
    }

    imprimeBiblioteca(&pBbt);
}
