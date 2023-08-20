#include<stdio.h>
int main()
{
	
	int choice;
	
	float radius,area,breadth,base,length,height;
	

//	find area of circle, rectangle and triangle
	
		
	printf("1 area of circle \n");
	printf("1 area of rectangle \n ");
	printf("1 area of triangle \n");
		
	printf("Enter a choice  \n");
	scanf("%d", &choice);
	
	switch (choice)
	{
		case 1 :{
			printf(" enter redius \n");
			scanf("%f", &radius);
			area = 3.141592654 * radius * radius ; 
			printf("area of circle = %f \n" , area);
			break;
		}
		case 2 :
		 {
			printf(" enter breadth,length \n");
			scanf("%f %f", &breadth , &length);
			area = breadth * length;
			printf("area of rectangle = %f \n", area);
			break;
		}
		case 3 : 
		{
			printf("enter base and height \n");
			scanf("%f %f", &base , &height);
			area = 0.5 * base * height;
			printf("area of rectangle = %f \n", area);
			break;
		}
		default:
		{
			printf("ivalid Input \n");
			break;
		}
	}
 
}
