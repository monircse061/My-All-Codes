#include<stdio.h>
int main()
{
    /*int a,*p=&a,q;
    a=5;
    q=*(&a);
    printf("%d %d",*p,q);*/
    int a[100],*p;
    scanf("%d",&a[0]);
    p=a;
    printf("%d %d",*p,&a[0]);
}
