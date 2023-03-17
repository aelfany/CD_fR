#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
void	ft_sort_int_tab(char *str)
{
	int	a;
	int	b;
	b = 0;

	a = 0;
	while (str[a])
	{
		if(str[a] == 'Y' || str[a] == 'y')
		{
			b++;
			a++;
			if(str[a] == 'e')
			{
				b++;
				a++;
			}
			if (str[a] == 's')
			{
				b++;
				a++;
			}
		}
		a++;
	}
	if(b > 0 || b <= 3)
		printf("YES\n");
	if(b > 3 || b == 0)
		printf("NO\n");
}
int main()
{
	int x;
	char *str;
	scanf("%d", &x);
	while(x >= 1)
	{
		scanf("%s", str);
		ft_sort_int_tab(str);
		x--;
	}
}
