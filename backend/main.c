
#include <stdio.h>

void menu() {
    printf("Conversor de Temperatura\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("Escolha a opção: ");
}

float celsiusParaFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32) * 5 / 9;
}

int main() {
    int opcao;
    float temp;

    menu();
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp);
        printf("Resultado: %.2f °F\n", celsiusParaFahrenheit(temp));
    } else if (opcao == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp);
        printf("Resultado: %.2f °C\n", fahrenheitParaCelsius(temp));
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
