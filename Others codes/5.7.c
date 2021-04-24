#include<stdio.h>
main()
{
    int i,j,sum=0;
    for(i=1;i>0;i++)
    {
        for(j=1;j<=i;j++)
        {sum=sum+1;
            printf("%3d",sum);}
            if(sum==91)
                break;

            printf("\n");
    }
    return 0;
}
