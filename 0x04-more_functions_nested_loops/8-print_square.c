/* main.h */
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_square(int size);

#endif /* MAIN_H */

/* 8-print_square.c */
#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: The size of the square.
 */
void print_square(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}

