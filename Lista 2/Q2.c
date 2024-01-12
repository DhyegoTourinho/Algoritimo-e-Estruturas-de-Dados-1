#include <stdio.h>

int fibonacci(int);
int contagem(int);

int main() {
    int n;
    scanf("%d", &n);
    if(n == 0){
        printf("0 ");
    }
    if (1 <= n && n <= 1000){
        contagem(n);
    }
    return 0;
}

int contagem (int n){
    if(n == 0){
    printf("%d ", fibonacci(n));
    } else {
        contagem(n-1);
        printf("%d ", fibonacci(n));
        }
    return 0;
}

int fibonacci(int n){
    if (n == 0){
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}       