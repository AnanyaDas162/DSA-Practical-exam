/*Write a program to find the factorial of a number using tail recursion.*/

#include <stdio.h>
int factorial( int n, int fact )
{
	if ( n==1 )
		return fact;
	else
		factorial( n-1, n*fact );
}
int main( ){
	int n,value;
	printf( "\nEnter the number : " );
	scanf( "%d", &n );
	if ( n < 0 )
		printf( "No factorial of negative number\n" );
	else if ( n==0 )
			printf( "Factorial of  zero is 1\n" );
	else
	{
		value = factorial( n,1 ); /* Function for factorial of number */
		printf( "Factorial of %d : %d\n",n,value );
	}
	return 0;
}
