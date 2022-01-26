// This program generates random numbers using the Linear Congruential Method

#include<stdio.h> 

int main() 
{
	int modulus,seed,multiplier,increment,samples,i;

	// The value of modulus should be greater than or equal to the length (number of digits) of the random sequence required.
	// The value of modulus should do computation without roundoffs.
	// The modulus determines that the period (range) of the numbers generated will be between [ 0, (modulus - 1) ]
	modulus = 64;	

	// The value used to generate psuedo-random numbers. Can be left to garbage value but the sequence then cannot be predicted.
	// To be in the range of [ -1 < seed < modulus ]
	seed;

	// The choice of multiplier depends on the choice of modulus.
	// If modulus is a multiple of 2 then multiplier should satisfy the condition, multiplier mod 8 = 5
	// If modulus is a power of 10 then modulus should satisfy, multiplier mod 200 = 21
	// If modulus is a multiple of 4 then, (multiplier - 1) should also be a multiple of four.
	// sq_root(modulus) < multiplier < modulus - sq_root(modulus)
	// (multiplier - 1) should be multiple of every prime number dividing into modulus.
	multiplier = 21;

	// Increment should be relatively prime to modulus.
	// Should be odd and not a multiple of 5
	increment = 43;

	printf("How many random numbers you want ?  \t");
	scanf("%d",&samples);
	printf("First %d random sequence with in the range [0,63] inclusive are: \n",samples);

	i = 0;
	while(i<samples)
	{
		seed = ((multiplier * seed) + increment) % modulus;
		printf("%d\t",seed);
		i++;
	}

	printf("\n");
	return 0;
}
