/* main.h */
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_numbers(void);

#endif /* MAIN_H */

/* 3-print_numbers.c */
#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        _putchar(num + '0');
    }
    _putchar('\n');
}

