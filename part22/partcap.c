
#include<stdio.h>
#include<string.h>

int main()
{
	int x;
	int y = 0;;
	int b = 0;
    char c;

	scanf("%d", &x);
    char *str =  "codeforces";
	while(x >= 1)
	{
        scanf(" %c", &c);
        while(y < strlen(str))
        {
            if(str[y] == c)
            {
                printf("YES\n");
                b = 1;
                break;
            }
            y++;
        }
        if(b == 0)
            printf("NO\n");
        b = 0;
        y = 0;
		x--;
	}
}