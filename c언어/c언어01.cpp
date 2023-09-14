#include<stdio.h>
int main(void) {
	int num;
	puts("숫자입력:");
	scanf("%d", &num);
	if(num==5)
		printf("5가 맞습니다");
	else
		printf("5가 아닙니다"); 
	return 0; 
}
