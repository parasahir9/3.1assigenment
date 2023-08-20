#include<stdio.h>
struct name1{
	int age1;
	
	
	char name1[1][100];
	float Price1;
}

    union name2
	{
	int age2; char name2[1][100]; 
	float Price2;
    }
    int main(){
	struct name1 n1;
	union name2 n2;

	printf("Size  Of structure = %d \n", sizeof(n1));  
	printf("Size  Of union = %d \n", sizeof(n2)); 
	 }
	 
}
