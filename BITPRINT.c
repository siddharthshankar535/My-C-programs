#include<stdio.h>
#define BITPRINT(a) bit_print((char *)&a,(char)sizeof(a))

// #include "/home/cerberus/Desktop/Siddharth/Programming/C/BITPRINT.c"
// The above path should be included to the file where bitprint is to be used
// The function that will be used will be BITPRINT(variable)

void bit_print(char *x,char len)
{
	char i,j;
	char msb = -128,bit=0,*addr;
	addr = x + (len-1);
	for(j=0;j<len;j++)
	{
		for(i=0;i<8;i++)
		{
			bit = msb & *addr;
			if(bit == -128)
				printf("1");
			else
				printf("0");
			*addr = *addr<<1;
		}
		printf(" ");
		addr--;
	}
	printf("\n");
}

