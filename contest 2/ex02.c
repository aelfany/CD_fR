#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
void check(int *tab, int v)
{
    int a = 0;
    int count = 0;
    while(a < v)
    {
        if(tab[a] % 2 == 0)
            count++;
        a++;
    }
    if(count == v || count == v - 1)
        printf("YES\n");
    else
        printf("NO\n");
}
int	*ft_strjoin(int *tab, int v, int size)
{
	tab[size] = v;
	return (tab);
}
int main()
{
    int a = 0;
    int b = 0;
    int v = 0;
    char c;
    int j;
    char *str = malloc(1000);
    int *tab = malloc(500 *sizeof(int));
    int count = 0;
    scanf("%s", str);
    char *str1 = "abcdefghijklmnopqrstuvwxyz";
    while(str1[a])
    {
        b = 0;
        while(str[b])
        {
            if(str[b] == str1[a])
                count++;
            b++;
        }
        if(count != 0)
            tab = ft_strjoin(tab, count, j++);
        count = 0;
        a++;
    }
    // int l = 0;
    // while(l < j)
    // {
    //     printf("%d\n", tab[l]);
    //     l++;
    // }
   check(tab, j);
}