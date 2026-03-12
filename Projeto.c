#include <stdio.h>
#include <ctype.h>

int main() {
    int opcao;
    float num1, num2, resultado;
    char continuar;

    do {
        // Exibição do Menu Inicial
        printf("===============================\n");
        printf("       Calculadora Simples     \n");
        printf("===============================\n");
        printf("Selecione uma operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Opcao: ");

        // Validação da entrada da opção (Verifica se é número e se está entre 1 e 5)
        if (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 5) {
            printf("\nErro: Opcao invalida! Insira um numero entre 1 e 5.\n\n");
            while (getchar() != '\n'); // Limpa o buffer para evitar loop infinito
            continue;
        }

        // Se o usuário escolher Sair
        if (opcao == 5) {
            break;
        }

        // Solicitação dos números
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        // Processamento da operação
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
                } else {
                    printf("Erro: Divisao por zero nao permitida!\n");
                }
                break;
        }

        // Pergunta se deseja continuar
        printf("\nDeseja realizar outra operacao? (s/n): ");
        scanf(" %c", &continuar); // O espaço antes de %c limpa o buffer do teclado

    } while (tolower(continuar) == 's');

    // Mensagem de despedida
    printf("\nObrigado por usar a calculadora! Ate a proxima.\n");

    return 0;
}
