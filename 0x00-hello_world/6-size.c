#include <stdio.h>

/**
 * main - print string in the printf fumction
 *`
 * Description using the main fuction
 * this program prints "Prints size of computer"
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %id byte(s)\n", sizeof(c));
	printf("Size of an int: %id byte(s)\n", sizeof(i));
	printf("Size of a long int: %id byte(s)\n", sizeof(li));
	printf("Size of a long long int: %id byte(s)\n", sizeof(lli));
	printf("Size of a float: %id byte(s)\n", sizeof(f));
	return (0);
}
