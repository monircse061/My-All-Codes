#include<stdio.h>
main()
{
    int i,j,k,l,n,c;
    while(scanf("%d",&n)!=EOF)
    {
        k=0;c=0;
        for(i=1; i<=n;i++)
        {

           scanf("%d",&j);



            if(j>0)
            {
                k=k+1;
            }
            else if(j<0)
            {c=c+1;}
            else if(j==0)
        continue;

        }
        printf("%d %d\n",k,c);
    }
    return 0;
}
