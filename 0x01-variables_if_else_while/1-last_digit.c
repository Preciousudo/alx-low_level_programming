#include <stdlib.h>
#include <time.h>
#includestdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, LastNum);
	else if (LastNum == 0)
		printf("Last digit of %d is %d and is 0\n", n, LasrnNum);
	else
		printf("Last dgit of %d is %d and is less than 6 and not 0\n", n, LastNum);
	return (0);

