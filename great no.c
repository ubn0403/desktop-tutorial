#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
        printf("a is great:%d",a);
    if((b>a)&&(b>c))
        printf("b is great:%d",b);
    if((c>a)&&(c>b))
        printf("c is great:%d",c);
    return 0;
}
