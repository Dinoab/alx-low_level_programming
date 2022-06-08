#include <stdio.h>  
#include <time.h>
#include <stdlib.h>
/**
<<<<<<< HEAD
 * * main - entry block
 * * @void: no argument
 * * Return: 0 (Sucess)
 * **/
=======
* main - entry block
* @void: no argument
* Return: 0 (Sucess)
**/
>>>>>>> 19dc1ed95d0fbe9d324791189ce2d1f478cae880
int main(void)

{
	int n;
<<<<<<< HEAD

=======
>>>>>>> 19dc1ed95d0fbe9d324791189ce2d1f478cae880
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
