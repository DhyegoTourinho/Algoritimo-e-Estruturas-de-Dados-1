#include <stdio.h>
#include <stdlib.h>

int main(){
    int numPedras;
    int numSapos;
    int j, i;

    scanf("%d", &numPedras);

    scanf("%d", &numSapos);

    int *pedras = (int *) calloc(numPedras + 1, sizeof(int));

    for(i = 1; i <= numSapos; i++){
        
        int pos;
        scanf("%d", &pos);
        
        int dist;
        scanf("%d", &dist);

        pedras[pos] = 1;

            for (j = pos; j >= 1; j -= dist) {
                pedras[j] = 1;
            }
            for (j = pos; j <= numPedras; j += dist) {
                pedras[j] = 1;
            }    
    } 

    for(i = 1; i <= numPedras; i++){
        printf("%d", pedras[i]);
        if(i < numPedras){
            printf("\n");
        }
    }

}