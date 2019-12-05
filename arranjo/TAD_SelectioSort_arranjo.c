//#include "TAD_Biblioteca.h"
#include "TAD_SelectioSort_arranjo.h"

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
      result = compara(&pTexto.texto[j], &pTexto.texto[menor]);
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

  for (i = 0; i < pBbt.Ultimo; i++)
  {
    Select_Sort(pBbt.biblioteca[i]);
  }
  imprimeBiblioteca(&pBbt);
}