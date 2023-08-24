#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o operador (+, -, *, /, %): ");
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisão por zero\n");
                return 1;
            }
            break;
        case '%':
            if (num2 != 0) {
                resultado = (int)num1 % (int)num2;
            } else {
                printf("Erro: Divisão por zero\n");
                return 1;
            }
            break;
        default:
            printf("Operador inválido\n");
            return 1;
    }

    printf("Resultado: %.2lf\n", resultado);

    return 0;
}