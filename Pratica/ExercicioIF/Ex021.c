/*
21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml,
garrafa de 600 ml e garrafa de 2 litros. Se um comerciante compra uma determinada quantidade
de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele comprou.
*/

int main()
{

    float lata = 0.350;
    float garrafa = 0.600;
    float litro = 2.0;
    float litros = 0;
    int x = 0;

    printf("Digite a quantidade de latas compradas:\n");
    scanf("%d", &x);
    litros = lata * x;
    printf("Digite a quandiadde de garrafas 600ml compradas:\n");
    scanf("%d", &x);
    litros += garrafa * x;
    printf("digite a quantidade de litros comprados: \n");
    scanf("%d", &x);
    litros += litro * x;
    printf("Total em litros: %.3f", litros);
}