#include<stdio.h>
#include<limits.h>

int main()
{
	int num1,num2,product;

	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	printf("%d", INT_MAX);

	int product=num1*num2;

	printf("Product of two numbers: %d",product);
    
	return  0;
}