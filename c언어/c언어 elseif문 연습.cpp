#include<stdio.h>
main() {
	int x;
	puts("���� 1,2,3 �߿� �ϳ��� ���ÿ�");
	scanf("%d", &x); 
	if(x==1)
		puts("1�� ����");
	else if(x==2)
		puts("2�� ����");
	else if(x==3)
		puts("3�� ����");
	else
		puts("1~3������ �����Ͻÿ�"); 
}
