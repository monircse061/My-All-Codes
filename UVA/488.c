#include<stdio.h>
int main()
{
    int i,j,k,l,m,x,y,z,n,a,p;
    scanf("%d",&z);
    for(a=0; a<z; a++)
    {
        scanf("%d%d",&x,&y);
        {
            for(i=0; i<y; i++)
            {
                for(j=1; j<x; j++)
                {
                    for(l=0; l<j; l++)
                    {
                        printf("%d",j);
                    }
                    printf("\n");
                }
                for(j=x-1; j>=0; j--)
                {
                    for(l=j; l>=0; l--)
                    {
                        printf("%d",j+1);
                    }
                    printf("\n");
                }
                if(a!=z-1||i!=y-1)
                    printf("\n");

            }
        }
    }
    return 0;
}
