#include <stdio.h>
int main(void) 
{
	int i=0;
	for(i=1;i<=100;i++) //Assuming that the range of numbers to be displayed is 1 - 100
	{
		if(i%3==0) //Checking if number is multiple of 3
		{
			if(i%5==0) //Checking if number is multiple of 3 and 5
			{
				printf("fizzbuzz\n"); 
				continue;
			}
			printf("fizz\n"); //Printed only when number is multiple of 3 and not multiple of 5
		}
		else if(i%5==0) //Checking if number is multiple of 5
		{
			printf("buzz\n");
		}
		else //If  number is neither a multiple of 3 or 5, the number is printed directly
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
