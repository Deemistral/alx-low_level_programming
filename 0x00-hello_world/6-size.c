#include <stdio.h>
/**
 *main - prints the string passed in the function
 *Returns 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a char: %ld byte(s)\n", sizeof(i));
	printf("Size of a char: %ld byte(s)\n", sizeof(li));
	printf("Size of a char: %ld byte(s)\n", sizeof(lli));
	printf("Size of a char: %ld byte(s)\n", sizeof(f));
	return (0);
}