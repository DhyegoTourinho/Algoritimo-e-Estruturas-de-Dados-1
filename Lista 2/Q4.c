#include <stdio.h>
void trocarNum(int);

int main(){
    int n;
    scanf("%d", &n);
    
    if(1<n && n < 1000000){
    while ((n%10) == 0){
        n /= 10;
    }
    trocarNum(n);
    } else {
        printf("0");
    }
}

void trocarNum(int n){
    if(n != 0){
        printf("%d", n%10);
        return trocarNum(n/10);
        
    }
}