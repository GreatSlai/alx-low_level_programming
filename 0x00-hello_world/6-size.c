#include <stdio.h>
/**
 * main - Programme that prints different types of sizes on a computer
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{

	int intType;
	float floatType;
	char charType;
	double doubleType;

	printf("Size of int: %d bytes\n", sizeof(intType));
	printf("Size of float: %d bytes\n", sizeof(floatType));
	printf("Size of char: %d bytes\n", sizeof(charType));
	printf("Size of double: %d byttes\n", sizeof(doubleType));

	return (0);

}

