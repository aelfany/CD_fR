#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void slove(char *str)
{
    int a,b,y,size;

    int *tab = malloc(sizeof(int) * 200);
    size = 0;
    a = 0;
    if(str[0] == '.'){
        tab[0] = 0;
        size++;
    }
    while(str[a]){
        y = 0;
        b = 0;
        while(str[a] == '.'){
            a++;
            b = 1;
        }
        if(b == 1 && a > 1){
            tab[size] = 0;
            size++;
        }
        b = 0;
        while(str[a] == '-'){
            y++;
            if(y == 2)
                break;
            a++;
            b = 1;
        }
        if(b == 1){
            tab[size] = y;
            size++;
        }
        a++;
    }
    if(str[a - 1] == '.')
    {
        tab[size] = 0;
        size++;
    }
    b = 0;
    while(b < size)
        printf("%d", tab[b++]);
        printf("\n");
}
int main()
{
    char *str;
    // scanf("%d", &x);
    // while(x)
    // {
        str = calloc(sizeof(char), 200);
        scanf("%s", str);
        slove(str);

        // printf("%lu", strlen(str));
    //     x--;
    // }
}