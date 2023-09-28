#include <stdio.h>

char n[30]; //전역으로 되어있음
char* getname() {
	printf("입력:");
	gets(n);
	return n; 
} 

int main () {
	char* n1 = getname();
	printf("%s %d\n", n1, &n);
	
	char* n2 = getname();
	printf("%s %d\n", n2, &n);
	
	char* n3 = getname();
	printf("%s %d\n", n3, &n);
	
	printf("%s, %s, %s", n1, n2, n3);
//	printf("%s", n);
	return 0;
}
