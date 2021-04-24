#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d",&i);
    while(i--)
    {scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==c&&b==d&&a!=b)
        printf("rectangle\n");
    else if(a==b&&b==c&&c==d&&d==a)
        printf("square\n");
    else if(a+b+c>d&&b+c+d>a&&c+d+a>b&&d+a+b>c)
        printf("quadrangle\n");
    else
        printf("banana\n");}
    return 0;
}
