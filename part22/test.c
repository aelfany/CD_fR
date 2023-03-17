#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

void sort(char *str)
{
    int x= 0;
    int y ;
    char swp;
    while(str[x])
    {
        y = x + 1;
        if(str[x] > str[y])
        {
            swp = str[x];
            str[x] = str[y];
            str[y] = swp; 
        }
        x++;
    }
    printf("%s", str);
}

int main()
{
    char str[100] = "23514";
    sort(str);
}
