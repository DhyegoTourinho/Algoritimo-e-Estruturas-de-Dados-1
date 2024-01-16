#include <stdio.h>
#include <stdlib.h>

/*
    Lista Simplesmente Encadeada.
*/

typedef struct No {
    int conteudo;
    struct no *prox;
} No;

typedef struct {
    No *inicio;
    int tam;
}Lista;

void CriarLista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}

//Método para inserir no ínicio.
void InserirNoInicio(Lista *lista, int dado){
    No *novo = malloc(sizeof(No));
    
    if(novo){
        novo -> conteudo = dado;
        novo -> prox = lista->inicio;
        lista->inicio = novo;
        lista->tam++;
    } else {
        printf("Erro ao alocar memoria!\n");
    }

}

//Método para inserir no final.
void inserirNoFinal(Lista *lista, int dado){
    No *aux, *novo = malloc(sizeof(No));
    
    if (novo != NULL){
        novo -> conteudo = dado;
        novo -> prox = NULL;

        if(lista->inicio == NULL){
            lista->inicio = novo;
        } else {
            aux = lista->inicio;
            while (aux -> prox != NULL){
                aux = aux -> prox;
            }
            aux -> prox = novo; 
        }
        lista->tam++;
    } else {
        printf("Erro ao alocar memoria!\n");
    }
}

void inserirNoMeio(Lista *lista, int dado, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if (novo != NULL){
        novo -> conteudo = dado;
        if (lista->inicio == NULL){
            novo -> prox = NULL;
            lista->inicio = novo;
        } else {
            aux = lista->inicio;
            while (aux -> conteudo != ant  && aux -> prox != NULL){
                aux = aux->prox;
            }
            novo -> prox = aux -> prox;
            aux -> prox = novo;    
        }
        lista->tam++;
    } else {
        printf("Erro ao alocar memoria!\n");
    }
}

void imprimir(Lista lista){
    No *no = lista.inicio;
    printf("\nLista tam %d: ", lista.tam);
    while (no != NULL){
        printf("%d ", no->conteudo);
        no = no->prox;
    }
    printf("\n\n");
}

 void menu (){
    puts("  ==================================\n");
    puts("  =  [0] -> Sair                  =\n");
    puts("  =  [1] -> Inserir no inicio     =\n");
    puts("  =  [2] -> Inserir no final      =\n");
    puts("  =  [3] -> Inserir no meio       =\n");
    puts("  =  [4] -> Imprimir              =\n");
    puts("  ==================================\n");
}

int main (){
    int opcao, num, anterior;
    Lista lista;
    
    CriarLista(&lista);

    do {
        menu();
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            printf("Digite um numero: ");
            scanf("%d", &num);
            InserirNoInicio(&lista, num);
            break;
        case 2:
            printf("Digite um numero: ");
            scanf("%d", &num);
            inserirNoFinal(&lista, num);
            break;
        case 3:
            printf("Digite um numero e um elemento de referencia: ");
            scanf("%d %d", &num, &anterior);
            inserirNoMeio(&lista, num, anterior);
            break;
        case 4:
            imprimir(lista);
            break;
        default:
            if (opcao != 0){
                printf("Opcao invalida!\n");
            }
            break;
        }
    } while (opcao != 0);

    return 0;
}