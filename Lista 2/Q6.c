#include <stdio.h>

int fatorial_duplo(int, int);

int main(){
    int n;
    int aux;
    scanf("%d", &n);
    aux = n;
    n = 1;
    if((aux%2) == 1){
    printf("%d", fatorial_duplo(n, aux));
    } else {
        aux-=1;
        printf("%d", fatorial_duplo(n, aux));
    }
}

int fatorial_duplo(int n, int aux){ 
    if (n <= aux-2) {
        n*=(n+2);
        return fatorial_duplo((n+2), aux);
    } else {
        return n;
    }
}