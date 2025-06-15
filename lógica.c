#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, opcao;

    // Inicializa o gerador de números aleatórios com base na hora atual
    srand(time(NULL));

    // Gera dois números aleatórios entre 1 e 100
    num1 = rand() % 100 + 1;
    num2 = rand() % 100 + 1;

    printf("=== JOGO DE COMPARAÇÃO ALEATÓRIO ===\n");
    printf("Número 1: %d\n", num1);
    printf("Número 2: %d\n", num2);

    // Exibe menu
    printf("\nEscolha uma opção:\n");
    printf("1 - Verificar se os números são iguais (usa if)\n");
    printf("2 - Verificar qual é maior (usa if-else)\n");
    printf("3 - Verificar diferença (usa if + switch)\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    // Usa switch para processar a escolha
    switch(opcao) {
        case 1:
            // Usando if
            if (num1 == num2)
                printf("Os números são IGUAIS.\n");
            if (num1 != num2)
                printf("Os números são DIFERENTES.\n");
            break;

        case 2:
            // Usando if-else
            if (num1 > num2)
                printf("O primeiro número (%d) é MAIOR que o segundo (%d).\n", num1, num2);
            else
                printf("O segundo número (%d) é MAIOR que o primeiro (%d).\n", num2, num1);
            break;

        case 3: {
            // Usa if para decidir a diferença
            int diferenca = abs(num1 - num2);
            printf("A diferença entre os números é: %d\n", diferenca);

            // Usa switch para classificar a diferença
            switch(diferenca) {
                case 0:
                    printf("Eles são exatamente iguais!\n");
                    break;
                case 1 ... 10:
                    printf("Números bem próximos.\n");
                    break;
                case 11 ... 30:
                    printf("Números moderadamente diferentes.\n");
                    break;
                default:
                    printf("Números muito diferentes.\n");
                    break;
            }
            break;
        }

        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
