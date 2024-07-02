#include "main.h"

/**
 *swap_int - Swaps the values of two integers.
 *@a: Pointer to the first integer to be swapped.
 *@b: Pointer to the second integer to be swapped.
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;	/*Copy value of first integer to a temporary variable*/

	*a = *b;	/*Swap value of the second integer into the first integer.*/
	*b = c;		/*Assign value of temporary variable into the second integer*/
}
