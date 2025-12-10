#include<stdio.h>
int main(){
	
	int num1, num2, max;
	//take user input
	printf("enter first number(num1) : \n");
	scanf("%d",&num1);
	
	printf("enter second number(num2) : \n");
	scanf("%d",&num2);
	
	max=(num1>num2)? num1 : num2;
	printf("maximum number = %d \n",max);
	return 0;
}
