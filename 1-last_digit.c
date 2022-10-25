#include	<stdlib.h>
#include	<time.h>
#include	<stdio.h>

/**
 * main -Entry point
 * Parameter:
 * Program assigns a random number to n each time it is executed.
 * Prints the last digit of the number stored in the variable n.
 * Return: Always 0 (Success)
*/

int	main(void)
{
int	n;

srand(time(0));
n	=	rand()	-	RAND_MAX / 2;
/* your code goes there */
return	(0);
}
