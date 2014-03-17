#include <stdio.h>
int main(void) 
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%3==0)
		{
			if(i%5==0)
			{
				printf("fizzbuzz\n");
				continue;
			}
			printf("fizz\n");
		}
		else if(i%5==0)
		{
			printf("buzz\n");
		}
		else
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
