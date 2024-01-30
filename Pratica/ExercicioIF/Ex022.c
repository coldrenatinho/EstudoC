/*
22. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu
poupar. Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total
economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda
moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é zero.
*/

int main()
{

    float total = 0.0;
    int inputMoeda = 0;

    printf("Digite a quantida de moedas de 0.01 centavos\n");
    scanf("%d", &inputMoeda);
    total += inputMoeda * 0.05;
    printf("Digite a quantida de moedas de 0.05 centavos\n");
    scanf("%d", &inputMoeda);
    total += inputMoeda * 0.05;
    printf("Digite a quantidade de moedas de 0.10 centavos\n");
    scanf("%d", &inputMoeda);
    total += inputMoeda * 0.10;
    printf("Digite a quantidade de moedas de 0.25 centavos\n");
    scanf("%d", &inputMoeda);
    total += inputMoeda * 0.25;
    printf("Digite a quantida de moedas de 0.50 centavos\n");
    scanf("%d", &inputMoeda);
    total += inputMoeda * 1.00;
    printf("Total de %.2f Reais", total);
}