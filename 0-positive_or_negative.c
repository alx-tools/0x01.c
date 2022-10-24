#include	<stdlib.h>
#include	<time.h>
#include	<stdio.h>

/**
 * main - Entry point
 * Parameter:
 * program assigns a random number
 * to n each time it is executed.
 * and prints whether the number stored in n
 * is zero, positive or negative.
 * Return: Always 0 (Success)
 */

int	main(void)
{
int	n;

srand(time(0));
n	=	rand()	-	RAND_MAX	/	2;

/* if loop execution */
if	(n	<	0)
{
	printf("%d	is	negative\n",	n);
}

/* else if loop execution */
else	if	(n	==	0)
{
	printf("%d	is	zero\n",	n);
}

/*else loop execution*/
else
{
	printf("%d	is	positive\n",	n);
}
return	(0);
}
