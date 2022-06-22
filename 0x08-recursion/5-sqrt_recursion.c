#include "main.h"
/**
 * _sqrt_recursion - square root
 * @n: integer
 * Return: value squeare
 */
int _sqrt_recursion(int n)
int find_sqrt(int num, int root);
{
	if (a * a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	else
		return (_sqrt2(a += 1, b));
}
/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 * Return: If the number has a natural square root - the square root.
 * If the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
