#include<stdio.h>

int main(){
	
	int age;
	float marks;
	char grade;
	char name[20];
	
	//taking user inputs
	printf("enter your age :");
	scanf("%d",&age);
	printf("enter marks :");
	scanf("%f",&marks);
	printf("enter your grade :");
	scanf(" %c",&grade);
	printf("enter your name :");
	scanf("%s",name);
	
	//display output
	printf("----------student details----------\n");
	printf("age is: %d \n",age);
	printf("marks is: %.2f \n",marks);
	printf("grade is: %c \n",grade);
	printf("name is: %s \n",name);
	
	
	
	return 0;
}
