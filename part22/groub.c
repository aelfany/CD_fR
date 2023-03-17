#include<stdio.h>
int main()
{
	int b;
	scanf("%d", &b);
	int a = b - 1;
	if(b < 2){
		printf("%d", b);
		return 0;
	}
	while(a >= 0)
	{
		if(b % a == 0){
			printf("%d", a);
			return 0;
		}
		a--;
	}
}
