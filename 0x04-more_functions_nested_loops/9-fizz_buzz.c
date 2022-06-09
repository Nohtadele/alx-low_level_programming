#include "stdio.h"
void fizz_buzz(void);

/**
 * fizz_buzz - function
 * Description: Print line n times
 * @n: Number of redundency to make the square
 * Return: Nothing to return
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

int main(void)
{
	fizz_buzz();
	return (0);
}
