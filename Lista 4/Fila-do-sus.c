#include <stdio.h>

int main() {
    int n; // Número de pacientes
    scanf("%d", &n);

    int chegada[n];
    int tempoCritico[n];
    int atendimentos;

    int pacienteCriticos = 0; // Contador de pacientes críticos

    int h, m, c; // Hora de chegada, minuto de chegada, tempo até a condição crítica
        scanf("%d", &h);
        scanf("%d", &m);
        scanf("%d", &c);

        // Convertendo a hora de chegada para minutos desde as 7h da manhã
        chegada[0] = h * 60 + m;
        tempoCritico[0] = chegada[0] + c;
        atendimentos = chegada[0];
        while(atendimentos%30 != 0){
            atendimentos++;
        }

    // Loop para processar cada paciente
    for (int i = 1; i < n; i++) {
        scanf("%d", &h);
        scanf("%d", &m);
        scanf("%d", &c);

        chegada[i] = h * 60 + m;
           
            if (atendimentos <= chegada[i] + 30){
                atendimentos = chegada[i];
                while(atendimentos%30 != 0){
                atendimentos--;
            }
        }

        tempoCritico[i] = chegada[i] + c;
        atendimentos += 30;
        
        // Verificando se o paciente já atingiu a condição crítica antes de ser atendido
        if (atendimentos > tempoCritico[i]) {
            pacienteCriticos++;
        }
    }

    // Imprimindo o número de pacientes críticos
    printf("%d\n", pacienteCriticos);

    return 0;
}
