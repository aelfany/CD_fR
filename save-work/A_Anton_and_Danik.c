#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d", &a);
    b = 0;
    c = 0;
    char *str = calloc(1, a+1);
    scanf("%s", str);
    for(a = 0; str[a]; a++){
        if(str[a] == 'A')
            b++;
        if(str[a] == 'D')
            c++;
    }
    if(b > c)
        puts("Anton");
    if(b < c)
        puts("Danik");
    if(c == b)
        puts("Friendship");
}