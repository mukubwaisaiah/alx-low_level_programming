/* main.h */
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_most_numbers(void);

#endif /* MAIN_H */

/* 4-print_most_numbers.c */
#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 (excluding 2 and 4),
 * followed by a new line.
 */
void print_most_numbers(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        if (num != 2 && num != 4)
        {
            _putchar(num + '0');
        }
    }
    _putchar('\n');
}

