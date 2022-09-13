#include <stdio.h>

/**
* main - prints the size computer compiled on
*
* Description; using the main function
* this program program that prints the size of various types on the computer it is compiled and run on
* return 0
*/
int main(void)
{
	char c;
	int i;
	long l;
	long long lli;
	float f;

	printf ("Size of a char: %id byte(s)\n", sizeof(c));
	printf ("Size of an int: %id byte(s)\n", sizeof(i));
	printf ("Size of a long int: %id byte(s)\n", sizeof(l));
	printf ("Size of a long long: %id byte(s)\n", sizeof(lli));
	printf ("Size of a float: %id byte(s)\n", sizeof(f));
	return (0);
}		
