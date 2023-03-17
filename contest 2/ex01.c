#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		x;
	char	*join;

	a = 0;
	if (!s1 || !s2)
		return (0);
	join = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	if (!join)
		return (0);
	while (s1[a])
	{
		join[a] = s1[a];
		a++;
	}
	x = 0;
	while (s2[x])
	{
		join[a] = s2[x];
		a++;
		x++;
	}
	join[a] = '\0';
	return (join);
}
void ft_count(char *str, int a)
{
    int a = 0;
    while(str[a])
    {
        char c = str[a];
        while(str)
    }
}
int main()
{
    char *str;
    int a = 0;
    int x;
    int count;
    scanf("%s", str); 
    scanf("%d", &x);
    int b = strlen(str);
    // if(b == x || b == x - 2)
    //     ft_count(str);
    while()
    {
        if()
    }
    if(a - b == (0 || 1))
        printf("YES\n");
    else
        printf("NO\n");
}