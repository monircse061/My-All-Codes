#include<stdio.h>
main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    if(a<b)
        {x=a;}
    else
        {x=b;}
        if(a%x==0&&b%x==0)
            {printf("%d",x);}

        else
    {for(;x>=1;x--){
       if(a%x==0&&b%x==0)
         break ;}
        printf("%d",x);}
        return 0;
}

