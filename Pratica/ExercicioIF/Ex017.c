/*
17. Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um
algoritmo para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este
tipo de conversão).
*/

// °F = (°C x 1,8) + 32

int main()
{

    float s = 0;
    float c = 0;

    printf(
        "Digite o valor da temperatura em Celsius:\t");
    scanf("%f", &c);
    s = (c * 1.8) + 32;
    printf("\nValor convertido para Fahrenheit: %f", s);
}