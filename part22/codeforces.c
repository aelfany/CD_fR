#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int ft_to(char *str)
{
	int a = 0;
	while(str[a] != '\0')
		a++;
	return a;
//	printf("%c%d%c", str[0], a-2,str[b]);
}
 
int main()
{
	char *a;
	int x;
	int y;
	int j = 0;
	scanf("%d", &x);
	while(x >= 1)
	{
		scanf("%s", a);
		while(a[j] == "hello"){
			printf("<");
		j++;
		}
		x--;
	}
}
