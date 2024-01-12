//Dhyego Tourinho
//Questão 13

#include <stdio.h>
#include <string.h>



int main(){
    int k, pedido, aux, cont, printador;
    int i = 3;
    int j = 0;
    int l = 0;
    long long int resposta[15]; 
    long long int fubonacci[101] = {0, 1, 1};
    long long int numASerFatorado;
    long long int fatorados[100];
    

    scanf("%d", &k);

    //fubonacci dos numeros:
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

        //Fatorando os resultados:
        while(l<j) {
            aux = 2;
            cont = 0;
            printador = 0;
            numASerFatorado = resposta[l];
            
            //Fatorando os resultados e adicionando no vetor:
            for ( ; aux <= numASerFatorado; aux++) {
                
                while ((numASerFatorado % aux) == 0){
                    fatorados[cont] = aux;
                    numASerFatorado /= aux;
                    cont++;
                }
            }
                //printador.
            while(printador <= (cont-1)) {
                printf("%lld", fatorados[printador]);
                //fazendo os espaços entre os numeros:
                if(printador <= (cont-1)){
                    printf(" ");
                }
                printador++;
            }
        printf("\n");
        l++;
        }
}  
    


