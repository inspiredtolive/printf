#include "holberton.h"
#include <stdio.h>
#include <limits.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;

	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
}
