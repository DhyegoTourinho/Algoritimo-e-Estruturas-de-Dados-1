//Dhyego Tourinho
//Questão 13

#include <stdio.h>
#include <string.h>



int main(){
    int k;
    int i = 3;
    int j = 0;
    long long int resposta[10]; 
    long long int fubonacci[100] = {0, 1, 1};
    int pedido;

    scanf("%d", &k);
    int tam = k;

        while(k >= 1) {
            
            while(i <= 100) {
                fubonacci[i] = fubonacci[i-1] + fubonacci[i-2];
                i++;
            }            

            scanf("%d", &pedido);
            resposta[j] = fubonacci[pedido];
            j++;
            k--;
        }
    for(j=0; j  < tam; j++){
        printf("%lld\n", resposta[j]);
    }

}

