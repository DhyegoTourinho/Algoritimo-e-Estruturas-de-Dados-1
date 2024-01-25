#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool VerificadorPrimo(int num) {
    int i;
    if (num <= 1) {
        return false;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Função para contar a quantidade de números primos no intervalo [x, y]
int CalcQuantPrimos(int x, int y) {
    int cont = 0;
    int i;
    for (i = x; i <= y; i++) {
        if (VerificadorPrimo(i)) {
            cont++;
        }
    }
    return cont;
}

int main() {
    int x, y;

    // Recebe os valores de x e y
    scanf("%d %d", &x, &y);

    // Verifica se os valores de entrada são válidos
    if (x < 0 || y < 0 || x > y) {
        printf("Valores inválidos para x e y.\n");
        return 1;
    }

    // Conta a quantidade de números primos entre x e y
    int primoCont = CalcQuantPrimos(x, y);

    // Imprime o resultado
    printf("%d\n", primoCont);

    return 0;
}
