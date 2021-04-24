#include<bits/stdc++.h>
using namespace std;
int ar[100009],br[100009],cr[100009];
int main()
{
    int n,x,t,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);y=1;z=1;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&ar[i]);
        }
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&br[i]);
        }
         for(int i=1; i<=n; i++)
            {
                cr[i]=br[i]-ar[i];
                if(cr[i]<0)
                {
                    printf("NIE\n");
                    y=0;
                    break;
                }
            }
        if(n==2&&y==1)
        {
            if(ar[1]==br[1]&&ar[2]==br[2])
            {
                printf("TAK\n");
            }
            else
            {
                printf("NIE\n");
            }
        }
        else if(n==1&&y==1)
        {
            if(ar[1]==br[1])
            {
                printf("TAK\n");
            }
            else
            {
                printf("NIE\n");
            }
        }
        else if(y==1)
        {
            int i;
            for( i=1; i<=n-2; i++)
            {
                if(cr[i]!=0)
                {
                    x=cr[i];
                    cr[i]-=x;
                    cr[i+1]-=x*2;
                    cr[i+2]-=x*3;
                    if(cr[i]<0||cr[i+1]<0||cr[i+2]<0)
                    {   z=0;
                        printf("NIE\n");
                        break ;
                    }
                }
            }
            if(z==1)i--;
            if((cr[i+1]!=0||cr[i+2]!=0)&&z==1)
            {
                printf("NIE\n");
            }
            else if(z==1)
            {
                printf("TAK\n");//cout<<1;
            }
            for(int i=1;i<=n+2;i++){
                cr[i]=0;
            }
        }
    }
    return 0;
}
