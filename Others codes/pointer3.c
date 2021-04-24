#include<stdio.h>
int main()
{
    int a=6,*pa=&a;
    printf("%d %d %d\n",a,*pa,pa);
    (*pa)++;
    printf("%d  %d %d",a,*pa,pa);
    return 0;
}
