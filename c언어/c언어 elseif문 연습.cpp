#include<stdio.h>
main() {
	int x;
	puts("숫자 1,2,3 중에 하나를 고르시오");
	scanf("%d", &x); 
	if(x==1)
		puts("1을 선택");
	else if(x==2)
		puts("2를 선택");
	else if(x==3)
		puts("3을 선택");
	else
		puts("1~3까지만 선택하시오"); 
}
