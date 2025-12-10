#include<stdio.h>
int main(){
	int num1, num2;
	//take user input
	printf("enter first number(num1) : \n");
	scanf("%d",&num1);
	
	printf("enter second number(num2) : \n");
	scanf("%d",&num2);
	
	//logical operator 
	//1) and &&
	printf("(num1>num2) && (num1<0) = %d \n",(num1>num2) && (num1<0));
	// or ||
	printf("(num1>num2) || (num1<0) = %d \n",(num1>num2) || (num1<0));
	
	printf("(num1>=num2) && (num1>0) = %d \n",(num1>=num2) && (num1>0));
	
	printf("!(num1==num2)= %d \n",!(num1==num2));
	return 0;
}
