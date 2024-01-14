#include <stdio.h>

enum Fruit
{
    Grape,
    Cherry,
    Lemon,
    Kiwi,
    NumFruits // Adicione um valor para manter o controle do número total de frutas
};

const char *fruitNames[] = {"Grape", "Cherry", "Lemon", "Kiwi"};

const char *getFruitName(enum Fruit fruit)
{
    if (fruit >= 0 && fruit < NumFruits)
    {
        return fruitNames[fruit];
    }
    else
    {
        return "Unknown Fruit";
    }
}

int main()
{
    enum Fruit fruits[] = {Grape, Cherry, Lemon, Kiwi};
    size_t numberOfFruits = sizeof(fruits) / sizeof(fruits[0]);

    for (size_t i = 0; i < numberOfFruits; i++)
    {
        printf("Nome do enum Fruit: %s\n", getFruitName(fruits[i]));
    }

    return 0;
}
