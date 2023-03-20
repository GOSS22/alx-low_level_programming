#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
* more headers goes there
* betty style doc for function main goes there
*/
int main(void)
{
	int n;
	int L_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	L_d = n % 10;
	if (L_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, L_d);
	}
	else if (L_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, L_d);
	}
	else if ((L_d < 6) && !(L_d ==  0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, L_d);
	}

	return (0);
}
