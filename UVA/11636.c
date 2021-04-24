#include<stdio.h>
int main()
{
    int a,b,c,i;
    while(scanf("%d",&a)&&a>0)
    {
        c=0;
        for(i=1;a>1;i=i*2)
            {a=a-i;
            c++;}
            printf("%d\n",c);
    }
}
