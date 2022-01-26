#include<stdio.h>
#define SQROOT(a) square_root(a)

//#include "/home/cerberus/Desktop/Siddharth/Programming/C/SquareRoot.c"
//The above path should be included to the file where square root is to be used

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
	//printf("%f",guess2);
}
