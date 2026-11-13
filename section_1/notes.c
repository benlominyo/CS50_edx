//// notes.c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_float("What's x? ");
    float y = get_float("What's y? ");

    printf("%0.50f\n", x / y);

    int balance = 20;
    printf("start: %i\n", balance);

    balance = balance + 1;
    printf("after + 1: %i\n", balance);

    balance++;
    printf("after ++: %i\n", balance);

    balance = balance - 1;
    printf("after - 1: %i\n", balance);

    balance--;
    printf("after --: %i\n", balance);

    balance = balance * 2;
    printf("after *2: %i\n", balance);

    balance *= 2;
    printf("after *= 2: %i\n", balance);

    balance = balance / 4;
    printf("after / 4: %i\n", balance);

    balance /= 4;
    printf("after /= 4: %i\n", balance);

    balance = balance % 6;
    printf("after perct 6: %i\n", balance);

    balance %= 6;
    printf("after modulo= 6: %i\n", balance);

    printf("%i\n", balance);
    return 0;
}