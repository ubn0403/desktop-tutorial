#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    a>b?printf("a is great:%d",a):printf("b is great:%d",b);
    return 0;
}
