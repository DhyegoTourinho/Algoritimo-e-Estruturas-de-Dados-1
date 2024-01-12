//Dhyego Tourinho Silva.
//Questão 2.

#include <stdio.h>

int main(){
    int num1;
    int num2;
    scanf ("%d", &num1); 
    scanf ("%d", &num2);

    int centnum1 = num1/100; 
    int deznum1 = (num1%100)/10;
    int unidnum1 = num1%10;

    int trocadeznum1 = deznum1*10;
    int trocaunidnum1 = unidnum1*100;
    
    int totalnum1 = centnum1 + trocadeznum1 + trocaunidnum1;

    int centnum2 = num2/100; 
    int deznum2 = (num2%100)/10;
    int unidnum2 = num2%10;

    int trocadeznum2 = deznum2*10;
    int trocaunidnum2 = unidnum2*100;
    
    int totalnum2 = centnum2 + trocadeznum2 + trocaunidnum2;

    if (totalnum1 > totalnum2){
        printf("%d", totalnum1);
    } else {
        printf("%d", totalnum2);
    }

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