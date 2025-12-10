#include<stdio.h>
int main(){
	//uniary operator
	int num;
	printf("enter a number \n");//20
	scanf("%d",&num);
	// increment
	printf("pre increment = %d \n",++num);//21
	printf("post increment = %d \n",num++);//21
	printf("after post increment = %d \n",num);//22
	printf("------------------------------- \n");
	//decrement
	printf("pre decrement = %d \n",--num);//21
	printf("post decrement = %d \n",num--);//21
	printf("after post decrement = %d \n",num);//20
	
	
	return 0;
}
