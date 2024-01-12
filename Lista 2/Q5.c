#include <stdio.h>

int Conversao_binaria(int n, int m);

int main () {
    int k, n;
    int i = 0;
    int vetor[1000];
    int cont = 0;
    int j = 0;
    scanf("%d", &k);

    while (k>0){
        scanf("%d", &n);
        while (n != 0){
            if ((n%2) == 1){
                vetor[i] = 1;
            }
            if ((n%2) == 0){
                vetor[i] = 0;
            }
            n /= 2;
            i++;
            cont++;
        }
        vetor [i] = 9;
        cont++;
        i++;
        k--;
    }
    i = 0;
    while(i<cont){
        if (vetor[i] == 9){
            for(int voltando = i-1; voltando >= j; voltando--){
                printf("%d", vetor[voltando]);
            }
            j = i+1;
            printf("\n");
        }
        i++;
    }
    return 0;
}