#include<stdio.h>
int main(void){
	char name[10];
	int select;  
	printf("�̸�:");
	scanf("%s", &name);
	printf("�̸��� [%s]�̱���. \n ������ 1, Ʋ���� 2",name);
	scanf("%d", &select);
	if(select==1)
		printf("%s�� �½��ϴ�.", name);
	else
		printf("%s�� �ƴմϴ�.", name);
	
}
