/*
*	We require to include the SquareRoot.c file in any C program we use it.
*	For including the file type everything written inside the <> symbols in your file where we intend to use SquareRoot.c program
*	<#include "<pathname>/SquareRoot.c">
*	Here, pathname is the location on the drive/computer where you store the SquareRoot.c file
*/

#include<stdio.h>
#define SQROOT(a) square_root(a)

float square_root(float num)
{
	float guess1 = 2,guess2 = 0,comp = 0,diff = 0;
	if(num<0)
		printf("Negative numbers don't have square roots.\n");
	else
	{
		do
		{
			comp = num/guess1;
			guess2 = (comp + guess1)/2.0;
			if(guess1>=guess2)
				diff = guess1 - guess2;
			else
				diff = guess2 - guess1;
			guess1 = guess2;
		}while(diff>0.001);
	}
	return(guess2);
}
