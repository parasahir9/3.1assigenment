#include<stdio.h>
int main(){

	char name[100] = {'a','b','b','a'} ; 
	char Reversname[100];
	int Name_Lenth=0;
	int Reversname_Lenth =0;
	int i;

    
	while(name[Name_Lenth]){ 
		Name_Lenth++;
	}
   
	for(i=Name_Lenth;i>=0;i--){
		Reversname[Reversname_Lenth] = name[i-1];
		if(Reversname_Lenth < Name_Lenth){
			Reversname_Lenth++;
		}
		
	}
	
	int Equal = Reversname_Lenth;
	
	for(i=0;i<Reversname_Lenth;i++){
		if(Reversname[i] == name[i]){
			Equal--;
		}
		printf("%c = %c  \n",Reversname[i],name[i]);
	}
	(Equal == 0)? printf("this is a palindrome \n") : printf("this is NOT a palindrome \n");

};

