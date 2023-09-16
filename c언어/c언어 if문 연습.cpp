#include<stdio.h>
int main(void){
	char name[10];
	int select;  
	printf("이름:");
	scanf("%s", &name);
	printf("이름이 [%s]이군요. \n 맞으면 1, 틀리면 2",name);
	scanf("%d", &select);
	if(select==1)
		printf("%s가 맞습니다.", name);
	else
		printf("%s가 아닙니다.", name);
	
}
