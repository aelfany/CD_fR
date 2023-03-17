#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ft_sort_int_tab(char *str, int *tab, int size)
{
	int	a;
	int	b;
 
	a = 0;
	while (a < size)
	{
		while(tab[a] == str[a]){}
	}
}

int *ft_malloc(int x)
{
	int *tab = malloc(x * sizeof(int));
	return tab;
}
int main()
{
	int x;
	int *tab;
	int y = 0;
	int b;
	int a;
	scanf("%d", &x);
	while(x >= 1)
	{
		y = 0;
		char *str;
		scanf("%d", &b);
		tab = ft_malloc(b);
		while(y < b)
		{
			scanf("%d", &a);
			scanf("%s", str);
			tab[y] = a;
			y++;
		}
		ft_sort_int_tab(str,tab,b);
		x--;
	}
}