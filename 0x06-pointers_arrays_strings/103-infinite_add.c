#include <stdio.h>
#include <string.h>

/**
 *infinite_add - Adds exxtremely large numbers.
 *@n1: The first number.
 *@n2: The second number.
 *@r: The result
 *@size_r: The length of the result.
 *
 * Return: The pointer to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1len = 0;
	int n2len = 0;
	int carry = 0;
	int sum;
	int i, j, k;

	while (n1[n1len] != '\0')
		n1len++;
	while (n2[n2len] != '\0')
		n2len++;
	if (size_r <= ((n1len > n2len) ? n1len : n2len) + 1)
		return (0);

	r[size_r - 1] = '\0';	/* Set the null terminator to the result buffer*/
	i = n1len - 1;		/*Set i value to last index of n1 'size - 1*/
	j = n2len - 1;		/*Set j value to the  last index of n2 'size -1'*/
	k = size_r - 2;		/*Set the k value to index before the null of r*/

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;		/*Add the carry for two digit number to the sum.*/
		if (i >= 0)
			sum += (n1[i--] - '0');	/*Add  digit from the left*/
		if (j >= 0)
			sum += (n2[j--] - '0');

		if (k < 0)
			return (0);

		r[k--] = (sum % 10) + '0'; /*Add the unit value to the sum*/
		carry = sum / 10;	/*Obtain the carry of the sum greater that 9*/
	}

	memmove(r, r + k + 1, size_r - k - 1);
	return (r);
}
