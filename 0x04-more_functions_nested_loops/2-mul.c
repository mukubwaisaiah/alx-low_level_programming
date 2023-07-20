/* main.h */
#ifndef MAIN_H
#define MAIN_H

int mul(int a, int b);

#endif /* MAIN_H */

/* 2-mul.c */
#include "main.h"

/**
 * mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int mul(int a, int b)
{
    return (a * b);
}

