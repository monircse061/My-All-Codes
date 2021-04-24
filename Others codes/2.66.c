#include<stdio.h>
main()
{
    int n,c=0,d=0;
    while(scanf("%d",&n)!=EOF)

     {if(n>0)
        {c=c+1;}
    else
        {d=d+1;}
        while(n==0)
            {return 0;}

        printf("%d %d",c,d);}
    return 0;
}
