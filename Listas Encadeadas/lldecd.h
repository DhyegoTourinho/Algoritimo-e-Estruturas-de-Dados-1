#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA 0

typedef struct Celula* ApontadorCelula;
typedef struct Descritor* ApontadorDescritor;

struct Descritor{
    ApontadorCelula prim;
    int tam;
    ApontadorCelula ult;
} Descritor;

struct Celula {
    ApontadorCelula ant;
    int chave;
    int dado;
    ApontadorCelula prox;
} Celula;

void CriarDescritorLista(ApontadorCelula * desc);