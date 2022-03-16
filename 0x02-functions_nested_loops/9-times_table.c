#include "main.h"

/**
 *
 *  * times_table - Print the 9 times table, starting with 0
 *
 *   * Return: 0
 *
 */

void times_table(void){
	int i; 
	int n;

	i = 0;
	n = 9;

	while(i <= 9)
	{
	    _putchar("%d * %d = %d\n", i, n, i * n);
	        i++;
	                
                };
            return 0;
}
