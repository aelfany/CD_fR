#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int	*ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	swp;

	a = 0;
   int *hel = tab;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				swp = tab[a];
				tab[a] = tab[b];
				tab[b] = swp;
			}
			b++;
		}
		a++;
	}
   int *gg = tab;
   tab = hel;
   return gg;
}
int main()
{
	int x;
	int a;
	int b;
   int *tab;
	int y;
   int k = 1;
   scanf("%d", &x);
	while(x >= 1)
	{
      y = 0;
      scanf("%d", &b);
		tab = malloc(b * sizeof(int));
		while(y < b)
		{
			scanf("%d", &a);
			tab[y] = a;
			y++;
		}
      y = 0;
      while(y < b)
      {
		   int *srt = ft_sort_int_tab(tab + k, b);
         printf("%d", tab[y] - srt[b - 1]);
         y++;
         k++;
      }
		x--;
	}
}