#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	bool flag = false;
	int arr[10],i;
	FILE *fp;
	fp = fopen("test001.txt", "r");
	if(fp == NULL)
	{
		printf("\nFile was not read");
	}
	else
	{
		printf("\nHouston we do not have a problem\n");
	}
	
	for(i=0;i<10;i++)
	{
		fscanf(fp,"%d\n",&arr[i]);
		printf("%d",arr[i]);
		printf("\n");
	}
	int userNum;
	printf("\nRequesting user to enter a number that is to be searched in the array: \n");
	scanf("%d",&userNum);
	
	for(i=0;i<10;i++)
	{
		if (userNum == arr[i])
		{
			flag=true;
			break;
		}
	}
	if(flag == true)
	{
		printf("\nThe user number is present in the array :)\n");
	}
	else
	{
		printf("\nThe user entered number is not present in the array :(\n");	
	}
	
	return 0;
}
