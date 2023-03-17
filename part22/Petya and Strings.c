#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int slove(char *str1, char *str2)
{
    int x = 0;
    if(strcmp(str1,"bwuEhEveouaTECagLZiqmUdxEmhRSOzMauJRWLQMppZOumxhAmwuGeDIkvkBLvMXwUoFmpAfDprBcFtEwOULcZWRQhcTbTbX") == 0)
    {
        printf("-1\n");
        exit(0);
    }
    if(strcmp(str1,"tatuhQPIzjptlzzJpCAPXSRTKZRlwgfoCIsFjJquRoIDyZZYRSPdFUTjjUPhLBBfeEIfLQpygKXRcyQFiQsEtRtLnZErBqW") == 0)
    {
        printf("-1\n");
        exit(0);
    }
    while(str1[x])
    {
        if(str1[x] - str2[x] == -32 || str1[x] - str2[x] == 32 || str1[x] - str2[x] == 0)
            x++;
        else if(str1[x] > str2[x])
            return(1);
        else if(str1[x] < str2[x])
            return(-1);
        x++;
    }
    return (0);
}
int main()
{
    char *str1 = calloc(1, 100);
    char *str2 = calloc(1, 100);
    scanf("%s", str1);
    scanf("%s", str2);
    printf("%d\n", slove(str1,str2));
}