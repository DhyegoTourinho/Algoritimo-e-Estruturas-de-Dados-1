#include <stdio.h>

int contagem(int, int);

int main (){
    int n;
    int j = 1;

    scanf("%d", &n);
    if (n >= 1 && n <= 5000){
    contagem(n, j);
    }

    return 0;   
}

int contagem (int n, int j){
    
    if(j <= n){
        printf("%d ", j);
          if (j < n){
              printf(" ");
          }
        return contagem(n, (j+1));
    } else {
        return 0;
    }
   

}