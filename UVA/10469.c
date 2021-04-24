#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        c=(~a&b)|(a&~b);
        printf("%d",c);
    }
    return 0;
}
