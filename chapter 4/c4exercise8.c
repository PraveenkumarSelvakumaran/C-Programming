/* chapter 4 exercise 8 - program to find next multiple 
 * rajkumar kandasamy, august 25, 2014
 */

#include<stdio.h>

int main()
{
	int i1 = 365;
	int i2 = 12258;
	int i3 = 996;
	int j1 = 7;
	int j2 = 23;
	int j3 = 4;

	printf("next multiple  of %d after %d is %d", j1, i1, i1 + j1 - i1 % j1);
	printf("\nnext multiple  of %d after %d is %d", j2, i2, i2 + j2 - i2 % j2);
	printf("\nnext multiple  of %d after %d is %d", j3, i3, i3 + j3 - i3 % j3);

	return 0;
}	