#include<stdio.h>
int main()
{
    int a;
    int *p;
    p=&a;
    *p=5;
    printf("%d\t%d\n",*p,a);
    *p=6;
    printf("%d\t%d",*p,a);

    return 0;
}
