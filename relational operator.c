#include<stdio.h>
int main(){
	
	int num1, num2;
	//take user input
	printf("enter first number(num1) : \n");
	scanf("%d",&num1);
	
	printf("enter second number(num2) : \n");
	scanf("%d",&num2);
	// relational operator
	//1) ==
	printf("num1==num2 =%d \n",num1==num2);
	//2) !=
	printf("num1!=num2 =%d \n",num1!=num2);
	//3) greater than
	printf("num1>num2=%d \n",num1>num2);
	//4)less than
	printf("num1<num2 =%d \n",num1<num2);
	//5)greater than equal to
	printf("num1>=num2 =%d \n",num1>=num2);
	//6)less than equal to
	printf("num1<=num2 =%d \n",num1<=num2);
	return 0;
}
