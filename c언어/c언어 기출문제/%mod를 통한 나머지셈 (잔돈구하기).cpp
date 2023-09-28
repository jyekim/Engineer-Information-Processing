// %(mod)를 통한 나머지셈
// 4620원 차례로 입력해서 구하기 잔돈 구하기 

#include <stdio.h>

int main() {
	int m = 4620;
	int a, b, c, d;
	a = m/1000;
	b = (m%1000)/500;
	c = (m%500)/100;
	d = (m%100)/10;
	printf("1000원 개수: %d\n", a);
	printf("500원 개수: %d\n", b);
	printf("100원 개수: %d\n", c);
	printf("10원 개수: %d\n", d);
} 
