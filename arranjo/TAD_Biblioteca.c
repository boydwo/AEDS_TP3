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
        printf("***************************************texto  ****** \n");
        imprimeTexto(&biblioteca->biblioteca[i]);
    }
}

void removetexto(TBiblioteca *biblioteca)
{
}

//-------------------------------------SELECT SORT-------------------------------------

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

//-------------------------------------QUICK SORT-------------------------------------

//ordena biblioteca
void QuickSort_bbt(TBiblioteca pBbt){
    Ordena_bbt(INICIO, MAX_TAM - 1, pBbt);
    imprimeBiblioteca(&pBbt);
}

void Ordena_bbt(int Esq, int Dir, TBiblioteca pBbt){
    int i, j;
    Particao(Esq, Dir, &i, &j, pBbt);
    if(Esq < j){
        Ordena(Esq, j, pBbt);
    }
    if(i < Dir){
        Ordena(i, Dir, pBbt);
    }
}

void Particao_bbt(int Esq, int Dir, int* i, int* j, TBiblioteca pBbt){
    TTexto pivo, aux;
    *i = Esq;
    *j = Dir;
    pivo = pBbt.biblioteca[(*i + *j)/2];

    do{
        while(pivo.tamanho > pBbt.biblioteca[*i].tamanho){
            (*i)++;
        }
        while(pivo.tamanho < pBbt.biblioteca[*j].tamanho){
            (*j)++;
        }
        if(*i <= *j){
            aux = pBbt.biblioteca[*i];
            pBbt.biblioteca[*i] = pBbt.biblioteca[*j];
            pBbt.biblioteca[*j] = aux;
            (*i)++;
            (*j)--;
        }while(*i <= *j);
    }
}