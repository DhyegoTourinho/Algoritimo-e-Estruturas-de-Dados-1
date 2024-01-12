//Dhyego Tourinho Silva
//Questão 1.

//Criei um sistema para facilitar os testes no codigo, caso deseje usar remova o comentario das linhas
//41 e 51. espero ter ajudado.

#include <stdio.h>

int main(){

    int referencia = 1986;
    int A = 1000;
    float anobiss = 0;
    scanf("%d", &A);
    if (0 <= A && A <= 10000){
        if (A < 1986) {
            while (referencia > A){
            referencia -= 76;
            anobiss += 76;
            if ((anobiss/1464) >= 1)   {
                anobiss = 0;
                referencia -= 1;
            }
            }
            referencia += 76;
        } else if (A >= 1986) {
            while (referencia < A){
            referencia += 76;
            anobiss += 76;
            if ((anobiss/1464) >= 1)   {
                anobiss = 0;
                referencia += 1;
            }
            }
        }
    }
    printf("%d", referencia);
/*
    int num;
    printf("\ndeseja continuar os testes?\n'0' == sim\n'1' == nao\n");
    scanf("%d", &num);
    if (num == 0){
        return main();
    } else {
        printf("testes concluidos com sucesso!");
        return 0;
    }
*/
}