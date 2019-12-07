#include "TAD_TextoLE.h"
typedef struct TCelulaT *Apon;
typedef struct TCelulaT{
    TTexto pPTexto;
    Apon pProx;
}TCelulaBiblioteca;

typedef struct{
    Apon pPrimeiro;
    Apon pUltimo;
}TBiblioteca;

void inicializaBbt(TBiblioteca* pBbt);
void insereBbt(TBiblioteca* pBbt,TTexto pPTexto);
void removeBbt(TBiblioteca* pBbt, TTexto pPTexto);
void imprimeBbt(TBiblioteca* pBbt);


