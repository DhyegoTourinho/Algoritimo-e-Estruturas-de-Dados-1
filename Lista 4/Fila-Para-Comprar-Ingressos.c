#include <stdio.h>

int main() {
    int quantPessoasInicial; // 1 < quantPessoasInicial < 60000
    unsigned int identificador; // 1 < identificador < quantPessoasInicial  
    int deixaramAFila; // 1 < deixaramAFila < quantPessoasInicial

    //Define quantas pessoas tem na fila:
    scanf("%d", &quantPessoasInicial);
    int vetquantPessoasInicial[quantPessoasInicial];

    //atribui um valor para cada pessoa da fila:
    for(int i = 0; i < quantPessoasInicial; i++){
    scanf("%d", &identificador);
    vetquantPessoasInicial[i] = identificador;
    }
    
    //Define quantas pessoas sairam da fila:
    scanf("%d", &deixaramAFila);

    //Verifica os identificadores das pessoas na fila:
    for(int i = 0; i < deixaramAFila; i++){
        scanf("%d", &identificador);

        //remove as pessoas da fila:
        for(int j = 0; j < quantPessoasInicial; j++){
                if (vetquantPessoasInicial[j] == identificador){
                    for (int k = j; k < quantPessoasInicial; k++){
                    vetquantPessoasInicial[k] = vetquantPessoasInicial[k+1];
                    }
                }
            }
        }

    //Mostra a nova fila:
    for(int i = 0; i <  quantPessoasInicial - deixaramAFila; i++){
    printf("%d ", vetquantPessoasInicial[i]);
    }

return 0;
}
