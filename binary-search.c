#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	//int numbers[10] = {0},toFind = 0;
	FILE *fp;
	char ch,i,start,end,mid = 0,len;
	char strings[10][15] = {"AALOK","BHUVAN","DISHA","HARPAL","ISHITA","MAYURI","PARTH","PARUL","RICHA","TANYA"},toFind[15];
	if(fp == NULL)
		printf("Cannot open file.\n");
	else
	{
		ch = fgetc(fp);
	}
	/*
	printf("Enter 10 strings in sorted order : ");
	i = 0;
	while(i < 10)
	{
		scanf("%s",strings[i]);
		//numbers[i] = rand();
		i++;
	}
	*/
	printf("\n10 strings in the list are : \n");
	i = 0;
	while(i < 10)
	{
		//printf("%d ",numbers[i]);
		printf("%s ",strings[i]);
		i++;
	}
	printf("\n");

	// CODE FOR BINARY SEARCH STARTS HERE
	printf("Enter the string you want to find in the list : ");
	scanf("%s",toFind);
	start = 0;
	end = 9;
	len = (end - start) + 1;
	while(!(start > end))
	{
		if(len % 2 == 0)
			mid = start + (len / 2);
		else
			mid = start + ((len - 1) / 2);

		
		if(strcmp(strings[mid],toFind) == 0)
		{
			printf("String present at index %d\n",mid);
			break;
		}
		else
		{
			if(strcmp(toFind,strings[mid]) < 0)
				end = mid - 1;
			else
				start = mid + 1;
		}

		len = (end - start) + 1;
	}

	if(start > end)
		printf("String not in the list.\n");
	
	return 0;
}
