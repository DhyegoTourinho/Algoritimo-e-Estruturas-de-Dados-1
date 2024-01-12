#include <stdio.h>
#include "lldecd.h"

int CriarDescritorLista (ApontadorDescritor * desc){
    
    (*desc) = malloc(sizeof(Descritor));
    if((*desc) != NULL){
        (*desc)->prim = NULL;
        (*desc)->tam = 0;
        (*desc)->ult = NULL;
        return(1);
    } else {
        return (-1)
    }
}

int InsInicio(ApontadorDescritor *desc, Celula celula) {
    ApontadorCelula q;
    q = (ApontadorCelula) malloc (sizeof(Celula));
    if (q == NULL){
        return(FALHA);
    } else {

        q->chave = celula.chave;
        q->dado = celula.dado;
        q->ant = NULL;
        q->prox = (*desc)->prim;
        if ((*desc)->tam == 0) {
            (*desc)->ult = q;
        } else {
            *((*desc)->prim)->ant = q;
        }
        (*desc)->prim = q;
        (*desc)->tam = (*desc)->tam + 1;
        
        return (1);
    }