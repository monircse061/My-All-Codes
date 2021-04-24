#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<3)
            break;
        i=n/2;
        printf("%d\n",i);

    }
    return 0;
}
