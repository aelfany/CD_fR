#include<stdio.h>
int main(void)
{
	int b;
	scanf("%d", &b);
	int a;
	if(b >= 0){
		a = b - 1;
	if(b < 2){
		printf("%d\n", b);
		return 0;
	}
	while(a >= 0)
	{
		if(b % a == 0){
			printf("%d\n", a);
			return 0;
		}
		a--;
	}
	}
	if(b < 0){
		printf("%d",b*-1);
}}
