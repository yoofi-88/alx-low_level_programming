#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    int number = 0;

    printf("Before reset_to_98: %d\n", number);
    reset_to_98(&number);
    printf("After reset_to_98: %d\n", number);

    return 0;
}
