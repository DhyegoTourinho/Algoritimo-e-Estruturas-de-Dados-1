#include <stdio.h>
int Quant_de_testes(float, int);

int main (){
    float n;
    float k;
    int cont = 0;

    scanf("%f %f", &n, &k);
    if(1 <= k && k <= n && n <= 1000000){
        printf("%d", Quant_de_testes(n, cont));
    }
}

int Quant_de_testes(float n, int cont) {
    if(n < 1){
        return cont;
    } else {
        return Quant_de_testes(n/2, cont+1);
    }
}