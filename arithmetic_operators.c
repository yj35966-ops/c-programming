#include<stdio.h>
int main(){
	
	int num1, num2;
	//take user input
	printf("enter first number(num1) : \n");
	scanf("%d",&num1);
	
	printf("enter second number(num2) : \n");
	scanf("%d",&num2);
	// arithmatic operation
	//addtion
	printf("addition = %d \n",num1 + num2);
	//substraction
	printf("substraction = %d \n", num1 - num2);
	//multiplication
	printf("multiplication = %d \n", num1 * num2);
	//division
	printf("division = %d \n", num1 / num2);
	//modulos
	printf("modulos = %d \n", num1 % num2);
	return 0;
}
