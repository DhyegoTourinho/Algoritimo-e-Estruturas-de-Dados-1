#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void numeroPorExtenso(double numero, char *extenso) {
    char *unidades[] = {"", "UM", "DOIS", "TRES", "QUATRO", "CINCO", "SEIS", "SETE", "OITO", "NOVE"};
    char *especiais1[] = {"DEZ", "ONZE", "DOZE", "TREZE", "CATORZE", "QUINZE", "DEZESSEIS", "DEZESSETE", "DEZOITO", "DEZENOVE"};
    char *especiais2[] = {"", "DEZ", "VINTE", "TRINTA", "QUARENTA", "CINQUENTA", "SESSENTA", "SETENTA", "OITENTA", "NOVENTA"};
    char *especiais3[] = {"", "CENTO", "DUZENTOS", "TREZENTOS", "QUATROCENTOS", "QUINHENTOS", "SEISCENTOS", "SETECENTOS", "OITOCENTOS", "NOVECENTOS"};

    int parteInteira = (int)numero;
    int parteDecimal = (int)((numero - parteInteira) * 100 + 0.5);
    int cont = 0;
 
    extenso[0] = '\0';
    
    if (parteInteira == 100000) {
        strcat(extenso, "CEM MIL REAIS");
        parteInteira = -1;
    }
    if (parteInteira == 1000000) {
        strcat(extenso, "UM MILHAO DE REAIS");
        parteInteira = -1;
    }
    if (parteInteira == 0 && parteDecimal == 0) {
        strcat(extenso, "ZERO REAIS");
    } else if (parteInteira == 100 && parteDecimal == 0) {
        strcat(extenso, "CEM REAIS");
        } else if (parteInteira == 100000 && parteDecimal == 0) {
        strcat(extenso, "CEM MIL REAIS");
        } else if (parteInteira == 1000000 && parteDecimal == 0) {
        strcat(extenso, "UM MILHAO DE REAIS");
        } else {
        //Unidades de milhar.
        if (parteInteira >= 100000) {
            cont++;
            if (parteInteira < 101000) {
                strcat(extenso, "CEM");
                parteInteira %= 100000;
                if (parteInteira < 1000){
                    strcat(extenso, " MIL");
                }
                if (parteInteira > 0) {
                    strcat(extenso, " E ");
                }
            } else {
                strcat(extenso, especiais3[parteInteira / 100000]);
                parteInteira %= 100000;
                if (parteInteira < 1000){
                    strcat(extenso, " MIL");
                }
                if (parteInteira > 0) {
                    strcat(extenso, " E ");
                }
            }
        }
        //Unidades de milhar.
        if (parteInteira >= 20000) {
            cont++;
            strcat(extenso, especiais2[parteInteira / 10000]);
            parteInteira %= 10000;
            if (parteInteira < 1000){
                strcat(extenso, " MIL");
            }
            if (parteInteira > 0) {
                strcat(extenso, " E ");
            }
        }
        if (parteInteira >= 1000) {
            cont++;
            if (parteInteira < 10000) {
                strcat(extenso, unidades[parteInteira / 1000]);
                parteInteira %= 1000;
                if (parteInteira < 1000){
                strcat(extenso, " MIL");
            }
                if (parteInteira > 0) {
                    strcat(extenso, " E ");
                }
            } else {
                if (parteInteira < 11000){
                    strcat(extenso, "DEZ");
                    parteInteira %= 1000;
                    if (parteInteira < 1000){
                    strcat(extenso, " MIL");
                }
                    if (parteInteira > 0) {
                        strcat(extenso, " E ");
                    }
                } else {
                    strcat(extenso, especiais1[(parteInteira - 10000) / 1000]);
                    parteInteira %= 1000;
                    if (parteInteira < 1000){
                    strcat(extenso, " MIL");
                }
                    if (parteInteira > 0) {
                        strcat(extenso, " E ");
                    }
                } 
            }
        }
        // Parte inteira
        if (parteInteira >= 100) {
            cont++;
            if (parteInteira == 100){
                strcat(extenso, "CEM REAIS");
                parteInteira = -1;
            }
            strcat(extenso, especiais3[parteInteira / 100]);
            parteInteira %= 100;
            if (parteInteira > 0) {
                if (parteInteira < 10) {
                    strcat(extenso, " E ");
                } else {
                    strcat(extenso, " E ");
                }
            }
        }
 
        if (parteInteira >= 20) {
            strcat(extenso, especiais2[parteInteira / 10]);
            parteInteira %= 10;
            if (parteInteira > 0) {
                if (parteInteira < 10) {
                    strcat(extenso, " E ");
                } else {
                    strcat(extenso, " ");
                }
            }
        }
 
        if (parteInteira > 0) {
            if (parteInteira < 10) {
                strcat(extenso, unidades[parteInteira]);
            } else {
                strcat(extenso, especiais1[parteInteira - 10]);
            }
        }
 
        // Adiciona "REAL" ou "REAIS" ao final da parte inteira
        if (parteInteira == 1 && cont == 0) {
            strcat(extenso, " REAL");
        } else if (parteInteira >= 1) {
            strcat(extenso, " REAIS");
        }
 
        // Parte decimal (centavos)
        if (parteDecimal > 0) {
            if (parteInteira > 0) {
                strcat(extenso, " E ");
            }
 
            if (parteDecimal < 10) {
                strcat(extenso, unidades[parteDecimal]);
                strcat(extenso, (parteDecimal == 1) ? " CENTAVO" : " CENTAVOS");
            } else if (parteDecimal < 20) {
                strcat(extenso, especiais1[parteDecimal - 10]);
                strcat(extenso, " CENTAVOS");
            } else {
                strcat(extenso, especiais2[parteDecimal / 10]);
                if (parteDecimal % 10 > 0) {
                    strcat(extenso, " E ");
                    strcat(extenso, unidades[parteDecimal % 10]);
                }
                strcat(extenso, (parteDecimal % 10 == 1) ? " CENTAVO" : " CENTAVOS");
            }
        }
    }
}
 
int main() {
    int quantidade;
    int i;
    // Recebendo a quantidade de vezes que deseja executar
    scanf("%d", &quantidade);
 
    // Verificando se a quantidade é válida
    if (quantidade <= 0) {
        printf("Por favor, insira um valor positivo para a quantidade.\n");
        return 1;
    }
 
    // Preparando arrays para armazenar os valores e os resultados
    double *valores = malloc(quantidade * sizeof(double));
    char **resultados = malloc(quantidade * sizeof(char *));
 
    // Alocando espaço para cada resultado
    for (i = 0; i < quantidade; i++) {
        resultados[i] = malloc(1000 * sizeof(char));
    }
 
    // Loop para receber valores
    for (i = 0; i < quantidade; i++) {
        scanf("%lf", &valores[i]);
    }
 
    // Loop para calcular os resultados
    for (i = 0; i < quantidade; i++) {
        numeroPorExtenso(valores[i], resultados[i]);
    }
 
    // Exibindo os resultados
    for (i = 0; i < quantidade; i++) {
        printf("%s\n", resultados[i]);
    }
 
    // Liberando a memória alocada
    free(valores);
    for (i = 0; i < quantidade; i++) {
        free(resultados[i]);
    }
    free(resultados);
 
    return 0;
}