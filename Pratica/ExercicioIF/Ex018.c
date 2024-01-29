/*
18. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um determinado
funcionário. Considere que o salário líquido é igual ao salário bruto descontando-se 10% de
impostos.
*/

int main()
{

    char nome[80] = "";
    float horaNormal = 10.0;
    float horaExtra = 15.0;
    float horasTrabalhadas = 0.0;
    float salarioBruto = 0.0;
    float salarioLiquido = 0.0;
    int horasMensal = 44;

    printf("Digite o nome do funcionario: ");
    scanf("%s", &nome);
    printf("\nDigite a quantidade horas trabalhadas:\n");
    scanf("%f", &horasTrabalhadas);

    if (horasTrabalhadas > horasMensal)
    {
        salarioBruto = horasMensal * horaNormal;
        salarioBruto += (horasTrabalhadas - horasMensal) * horaExtra;
    }
    else
    {
        salarioBruto = horaNormal * horasTrabalhadas;
    }
    salarioLiquido = salarioBruto - (salarioBruto * 10 / 100);

    printf("\n %s > Salario Bruto: %.2f\t Salario Liquido: %.2f", nome, salarioBruto, salarioLiquido);
}
