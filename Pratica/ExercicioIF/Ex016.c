/*
16. A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de
queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou
presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em
que o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as quantidades (em
quilos) de queijo, presunto e carne necessários para compra.
*/

int main()
{

    float queijo, presunto, hamburguer;
    queijo = 0.050;
    hamburguer = 0.100;
    presunto = 0.050;

    int quantidade = 0;

    printf("Digite a quantidade de hamburgues desejada: \n");
    scanf("%d", &quantidade);
    printf("Quatidade de queijo: %.3fKg\n", 2 * (quantidade * queijo));

    printf("Quatidade de presunto: %.3fKg\n", (quantidade * presunto));

    printf("Quatidade de hamburger: %.3fKg\n", (quantidade * hamburguer));
}