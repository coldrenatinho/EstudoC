/*
19. A granja Frangotech possui um controle automatizado de cada frango da sua produção. No pé
direito do frango há um anel com um chip de identificação; no pé esquerdo são dois anéis para
indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o
anel de alimento custa R$3,50, faça um algoritmo para calcular o gasto total da granja para marcar
todos os seus frangos.
*/

int main()
{

    int quantidadeDireito = 1;
    int quantidadeEsqurdo = 2;

    float valorChipAlimento = 3.50;
    float valorChipID = 4.00;
    int quantidadeFrango = 0;

    printf("Quantidade de  Frangos: ");
    scanf("%d", &quantidadeFrango);
    printf("\nValor gasto com chip de identificacao: %.2f", quantidadeFrango * quantidadeDireito * valorChipID);
    printf("\nValor gasto com chip de Alimento: %.2f", quantidadeFrango * quantidadeEsqurdo * valorChipAlimento);

    return 0;
}