#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int x;
	int *tab;
	int y = 0;
	int k;
	int b;
	int a;
	int j;
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
            while(tab[a] != j)
            {
                if(tab[y] == j)
                printf("YES\n");
                else
                printf("NO\n");
            }
            y++;
        }
}
