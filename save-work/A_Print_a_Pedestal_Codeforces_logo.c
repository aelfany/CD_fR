#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// void slove(int *tab, int size)
// {
//     int a,b,c;
//     a = 0;
//     while(a < size)
//     {
//         a++;
//     }
// }
// void slove(char *str)
// {
//     int a,b,c;
//     a = 0;
//     while(str[a])
//     {
//         a++;
//     }
// }

int main()
{
    int x,y,a,b,c,d;
    int *tab;
    char *str;
    scanf("%d", &x);
    while(x)
    {
        scanf("%d", &y);
        if(y%3==0)
            printf("%d %d %d\n", y/3,y/3+1,y/3-1);
	    else if(y%3==1)
            printf("%d %d %d\n", y/3,y/3+2,y/3-2);
	    else 
		    printf("%d %d %d\n", y/3+1,y/3+2,y/3);
        x--;
    }
}
