#include <stdio.h>
/**
 * main - Programme that prints different types of sizes on a computer
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %zu bytes\n", sizeof(a));
	printf("Size of int: %zu bytes\n", sizeof(b));
	printf("Size of long int: %zu bytes\n", sizeof(c));
	printf("Size of long long int: %zu bytes\n", sizeof(d));
	printf("Size of float: %zu bytes\n", sizeof(e));

	return (0);

}

