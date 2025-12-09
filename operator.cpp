//1)a varaible is name given to memory location
#include<stdio.h>

int main(){
//	integer types

	int i = 10;
	short int si = 5;
	long int li = 123431;
	unsigned int ui = 20;
	// character types 
	char c ='a';
	 // floating point type
	 float f = 3.14;
	 double d = 3.14455655544;
	 long double ld = 3.143232243342323223;
	 
	 printf("-------integer types--------");
	 printf("int: value=%d, size = %zu byt \n",i,sizeof(i));
	
	return 0;
}
