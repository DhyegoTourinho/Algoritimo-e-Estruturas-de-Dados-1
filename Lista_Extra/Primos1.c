#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool VerificaPrimo(int num) {
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

// Função para gerar a lista de números primos no intervalo [2, n]
int GeradorDePrimo(int n, int primo[]) {
    int i;
    int cont = 0;
    for (i = 2; i <= n; i++) {
        if (VerificaPrimo(i)) {
            primo[cont] = i;
            cont++;
        }
    }
    return cont;
}

int main() {
    int n, x, y, i;

    // Recebe o valor de n
    scanf("%d", &n);

    // Garante que n é maior ou igual a 2
    if (n < 2) {
        printf("Por favor, insira um número natural maior ou igual a 2.\n");
        return 1;
    }

    // Declara um array para armazenar os números primos e gera a lista
    int primo[n];
    int contPrimo = GeradorDePrimo(n, primo);

    // Recebe os valores de x e y
    scanf("%d %d", &x, &y);

    // Imprime os números primos no intervalo [x, y]
    if (x < 1 || y > contPrimo || x > y) {
        printf("Valores inválidos para x e y.\n");
        return 1;
    }

    for (i = x - 1; i < y; i++) {
        printf("%d ", primo[i]);
    }
    return 0;
}
