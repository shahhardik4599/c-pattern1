#include<stdio.h>

void main()
{
	int i,k;
	for(i=1;i<=5;i++)
	{
		for(k=i;k>=1;k--)
		{
			printf("%d",k%2);
		}
		printf("\n");
	}
}

