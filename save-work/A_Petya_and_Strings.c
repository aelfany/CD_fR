#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fun(char *str)
{
    while(*str)
    {
        if(*str >= 'A' && *str <= 'Z')
            *str += 32;
        str++;
    }
}
int main()
{
    int a; 
    char *str = calloc(1, 101);
    char *str1 = calloc(1, 101);
    scanf("%s %s", str, str1);
    fun(str);
    fun(str1);
    if(strcmp(str, str1) < 0)
        puts("-1");
    else if(strcmp(str, str1) > 0)
        puts("1");
    else if(strcmp(str, str1) == 0)
        puts("0");
}