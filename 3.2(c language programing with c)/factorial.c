#include<stdio.h>
int main()
{
	int n,i;
	int fact=1;
	
	printf("enter a value");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
    }
		printf("fact is %d \n",fact);
	
}
