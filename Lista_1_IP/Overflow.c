//Dhyego Tourinho Silva.
//Questão 3.

#include <stdio.h>

int main(){
    int N;
    int N1;
    int N2;
    char C;
    int teste;

    scanf("%d", &N);
    scanf("%d", &N1);
    scanf(" %c", &C);
    scanf("%d", &N2);

    
    if (C == 'x'){
        teste = N1 * N2;
        if (teste > N){
            printf("overflow");
        } else {
            printf("no overflow");
        }
    } else if (C == '+'){
        teste = N1 + N2;
        if (teste > N){
            printf("overflow");
        } else {
            printf("no overflow");
        }


    }

}