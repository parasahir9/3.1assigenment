#include<stdio.h>
int main()
{
	char alpha;
	printf("enter a alphabet");
	scanf("%c",&alpha);
	
	switch(alpha)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("it is vowel");
		break;
		default:
		printf("it is consonent \n");
	}
}
