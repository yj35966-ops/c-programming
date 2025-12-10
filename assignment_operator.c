#include<stdio.h>
int main(){
	
	int num;
	printf("enter a number \n");
	scanf("%d",&num);
	num +=5;
	printf("after num+= %d \n",num);
	num -=10;
	printf("after num-=%d \n",num);
	num *=4;
	printf("after num*=%d \n",num);
	num %=10;
	printf("after num%=%d \n",num);
	num /=5;
	printf("after num/=%d \n",num);
	return 0;
}
