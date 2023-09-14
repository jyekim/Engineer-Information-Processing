#include<stdio.h>
main(){
	int a= 10;
	int b= 10;
	int c,d;
	
	c=++a; 
	d=b++;
	printf("a값 10을 ++a하면 %d이다.\n", c);
	printf("b값 10을 b++하면 %d이다.\n", d); 
	
} 
