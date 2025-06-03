#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long fatorial(int n) {
    if (n < 0) return -1;
    long long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

void menu() {
    printf("\n========== CALCULADORA CIENTÍFICA ==========\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Potência\n");
    printf("6 - Raiz quadrada\n");
    printf("7 - Fatorial\n");
    printf("8 - Seno (em graus)\n");
    printf("9 - Cosseno (em graus)\n");
    printf("10 - Tangente (em graus)\n");
    printf("0 - Sair\n");
    printf("=============================================\n");
    printf("Escolha uma opção: ");
}

int main() {
    int opcao;
    double num1, num2, resultado;
    int inteiro;
    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois números: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 2:
                printf("Digite dois números: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 3:
                printf("Digite dois números: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 4:
                printf("Digite dois números: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) {
                    printf("Erro: divisão por zero!\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;
            case 5:
                printf("Digite a base e o expoente: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = pow(num1, num2);
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 6:
                printf("Digite um número: ");
                scanf("%lf", &num1);
                if (num1 < 0) {
                    printf("Erro: raiz de número negativo!\n");
                } else {
                    resultado = sqrt(num1);
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;
            case 7:
                printf("Digite um número inteiro não negativo: ");
                scanf("%d", &inteiro);
                if (inteiro < 0) {
                    printf("Erro: fatorial de número negativo!\n");
                } else {
                    long long fat = fatorial(inteiro);
                    printf("Resultado: %lld\n", fat);
                }
                break;
            case 8:
                printf("Digite o ângulo em graus: ");
                scanf("%lf", &num1);
                resultado = sin(num1 * M_PI / 180);
                printf("Resultado (seno): %.4lf\n", resultado);
                break;
            case 9:
                printf("Digite o ângulo em graus: ");
                scanf("%lf", &num1);
                resultado = cos(num1 * M_PI / 180);
                printf("Resultado (cosseno): %.4lf\n", resultado);
                break;
            case 10:
                printf("Digite o ângulo em graus: ");
                scanf("%lf", &num1);
                if (fmod(num1, 180) == 90) {
                    printf("Erro: tangente indefinida para %.2lf graus!\n", num1);
                } else {
                    resultado = tan(num1 * M_PI / 180);
                    printf("Resultado (tangente): %.4lf\n", resultado);
                }
                break;
            case 0:
                printf("Saindo da calculadora. Até logo!\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

