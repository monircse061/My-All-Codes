#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d",&a)&&a!=0)
    {
        if(a<=100)
            printf("f91(%d) = 91\n",a);
        else if(a>=101)
            printf("f91(%d) = %d\n",a,a-10);
    }
    return 0;
}
