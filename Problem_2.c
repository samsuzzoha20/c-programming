#include<stdio.h>
int main()
{
    int a,b,sum,sub,mlt;
    scanf("%d",&a);
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mlt=a*b;
    float dvd=a/b;
    printf("%d\n%d\n%d\n%0.2f",sum,sub,mlt,dvd);
    return 0;
}