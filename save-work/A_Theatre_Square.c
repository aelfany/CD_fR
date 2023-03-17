#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    long long a,b,c;
    scanf("%lld %lld %lld", &a, &b , &c);
    printf("%lld\n", ((a + c - 1) / c ) * ((b + c - 1) / c));
}