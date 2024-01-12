#include <stdio.h>
int main(){
    int vetor[3] = {1,2,'\n',3,4};
    int j = sizeof(vetor)/4;

    printf("%d", j);
}
