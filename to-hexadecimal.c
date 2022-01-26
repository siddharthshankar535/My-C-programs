// THIS PROGRAM TAKES A DECIMAL NUMBER AS INPUT AND PRINTS IT'S HEXADECIMAL EQUIVALENT

#include<stdio.h>
#define MAX 9

int main() {

	char hexa[MAX] = {'0'};
	int number = 0,temp = 0,last = MAX-2,rem = 0;
	hexa[8] = '\0';
	printf("Enter a positive integer : ");
	scanf("%d",&number);

	// CALCULATING THE HEXADECIMAL OF THE ENTERED INTEGER
	temp = number;
	while(temp != 0) {
	
		rem = temp % 16;
		if(rem < 10) {
		
			hexa[last] = 48 + rem;
		}
		else {
		
			hexa[last] = 55 + rem;
		}
		temp = temp / 16;
		last--;

	}

	printf("Hexadecimal of %d is ",number);
	//printf("%s\n",hexa);

	last = 0;
	while(last < MAX) {

		if(hexa[0] != '0')	
			printf("%c",hexa[last]);
		last++;
	}
	printf("\n");

	return 0;
}
