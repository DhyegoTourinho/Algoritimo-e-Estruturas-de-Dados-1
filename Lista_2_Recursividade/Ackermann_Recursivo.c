#include <stdio.h>

unsigned long int funcao_Arckeman(unsigned long int, unsigned long int);

int main(){
    unsigned long int m;
    unsigned long int n;
    scanf("%ld %ld", &m, &n);  
    printf("%ld", funcao_Arckeman(m, n));
}

unsigned long int funcao_Arckeman(unsigned long int m, unsigned long int n){
    if(m == 0){
        return n + 1;
    } else if (n == 0 && m > 0){
        return funcao_Arckeman(m - 1, 1);
    } else if (m > 0 && n > 0){
        return funcao_Arckeman(m - 1, funcao_Arckeman(m, n - 1));
    } else {
        return 1;
    }
}
