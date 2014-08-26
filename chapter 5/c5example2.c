/* chapter 5 example 1 calculating 200th triangular number
 * rajkumar kandasamy
 */
 
 #include<stdio.h>
 
 int main()
 {
	int i;
	int t = 0;
	
	for(i = 1;i <= 200; i++)
	{
		t = t + i;
	}
	printf("The 200th triangular number is %d", t);
	
	return 0;
}