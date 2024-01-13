//Dhyego Tourinho Silva.
//Questão 4.

#include <stdio.h>
#include <string.h>

int main(){
    int N;
    char resposta[100] = {""};
    char yes[5] = {"yes "};
    char no[4] = {"no "};
    int num;
    int aux, aux2;
    scanf("%d", &N);

    if (N >= 1){
        while (N >= 1){
            scanf("%d", &num);
            aux = 0;
            aux2 = num;
            while(num != 0) {
                aux = (aux * 10) + (num%10);
                num /= 10;      
            }
    
            if ((aux - aux2) == 0) {
            strcat(resposta, yes);
            } else {
            strcat(resposta, no);
            }

        N--;
        }
    
    int tamanho = strlen(resposta);
    resposta[tamanho-1] = '\0';
    printf("%s", resposta);
    
    } else {
        return 0;
    }
}