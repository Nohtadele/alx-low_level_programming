#include "stdio.h"
void fizz_buzz(void);

/**
 * fizz_buzz - function
 * Description: Print numbers from 1 to 100
 * with replacing the word Fizz for multiples of 3,
 * Buzz for multiples of 5 and
 * FizzBuzz for multiples of both
 * Return: Nothing
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else
			if ((i % 3) == 0)
				printf("Fizz ");
			else
				if ((i % 5) == 0)
					printf("Buzz ");
				else
					printf("%d ", i);
	}
	printf("\n");
}

/**
 * main - Intery point
 * Description: Main intry point
 * Return: 0 if success
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
