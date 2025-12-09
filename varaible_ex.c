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
	 long double ld = 3.143647346;
	 
	 printf("-------integer types-------- \n");
	 printf("int: value=%d, size = %zu byte \n",i,sizeof(i));
	 printf("short int : value = %d, size= %zu byte \n",si,sizeof(si));
	 printf("long int : value = %d, size= %zu byte \n",li,sizeof(li));
	 printf("unsigned int : value = %u, size = %zu byte \n",ui,sizeof(ui));
	 
	 printf("---------character types--------\n");
	 printf("char : value = %c, size = %zu byte \n",c,sizeof(c));
	 
	 printf("---------floating point----------\n");
	 printf("float : value = %f, size = %zu byte \n",f,sizeof(f));
	 printf("double : value = %lf, size = %zu byte \n",d,sizeof(d));
	 printf("long double : value = %.10Lf, size = %zu byte \n",ld,sizeof(ld));


	
	return 0;
}
