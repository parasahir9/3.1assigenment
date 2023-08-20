#include<stdio.h>

#define matrix_ROWS 2
#define matrix_COLS 2

int matrix_1[matrix_ROWS][matrix_COLS];
int matrix_2[matrix_ROWS][matrix_COLS];
int metrix[matrix_ROWS][matrix_COLS];
int i,j;
int PRINT(int N){
	for( i=0;i<matrix_ROWS;i++){
		for(j=0;j<matrix_COLS;j++){
			
			if(i==0 && j==0){ printf("metrix = {\n"); };
			if(i != 0 && j == 0) { printf("\n"); };
			if(N == 1){	printf("%d ",metrix[i][j]); }
			else if(N == 2){ printf("%d ",matrix_1[i][j]); }
			else if(N == 3){ printf("%d ",matrix_2[i][j]); };
			if(i == matrix_ROWS - 1 && j == matrix_COLS - 1){ printf("\n} \n"); };
		}
	}
}

int ADD(){
	
	for(i=0;i<matrix_ROWS;i++){
		for(j=0;j<matrix_COLS;j++){
			metrix[i][j] = matrix_1[i][j] + matrix_2[i][j] ;
			
		}
	}
	PRINT(1);

}

int REMOVE(){
	for(i=0;i<matrix_ROWS;i++){
		for(j=0;j<matrix_COLS;j++){
			metrix[i][j] = matrix_1[i][j] - matrix_2[i][j] ;
			
		}
	}
	
	PRINT(1);
	
}

int MULTI(){
	for(i=0;i<matrix_ROWS;i++){
		for(j=0;j<matrix_COLS;j++){
			metrix[i][j] = matrix_1[i][j] * matrix_2[i][j] ;
			}
	}
	
	PRINT(1);
	
}

int main(){

	int choice ;
	
	for(i=0;i<matrix_ROWS;i++){
		for( j=0;j<matrix_COLS;j++){
			printf("matrix-1 =  Add %d of %d = ",i,j);
			scanf("%d",&matrix_1[i][j]);
		}
	}
	
    PRINT(2);
	
	printf("--------------\n");
	for(i=0;i<matrix_ROWS;i++){
		for( j=0;j<matrix_COLS;j++){
			printf("matrix-2 =  Add %d of %d = ",i,j);
			scanf("%d",&matrix_2[i][j]);
		}
	}
	
 	PRINT(3);
	
	printf("1. + \n2. - \n3. *\nChoice = ");
	fflush(stdin);
	scanf("%d",&choice);
	fflush(stdin);
	
	if(choice == 1){
		ADD();
	}else if(choice == 2){
		REMOVE();
	}else if(choice == 3){
		MULTI();
	}else if(choice){
		printf("invalid Choice\n");
	}
}

