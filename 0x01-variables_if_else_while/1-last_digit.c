#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - block main
* Return: 0
*/
int main(void)
{
	int n;

	stand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("%i and is greater than 5/n", n);
	else if (n == 0)
		printf("%i and is 0/n", n);
	else
		printf("%i and is less than 6 and not 0/n", n);
	return (0);
}
