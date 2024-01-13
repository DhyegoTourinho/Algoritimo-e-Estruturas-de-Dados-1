#include <stdio.h>
#include <stdlib.h>
#include "lldecd.h"



int main(){
    int resultado;
    ApontadorDescritor descritorLista;

    resultado = CriarDescritorLista(&descritorLista);
    if(resultado == 1){
        puts("Descritor criado para lista vazia.");
    } else {
        puts("Erro ao criar descritor da lista.");
    }
    return(EXIT_SUCCESS);
}