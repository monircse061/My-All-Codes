#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,ck,mid,l1=1;
    scanf("%d %d",&n,&c);
    int l=1,r=n,tk=999;
    if(n==1)
    {
        printf("3 1");
    }
    else
    {
        while(l<=r)
        {
            if(l1==1)
            {
                mid=(l+r)/2;
                printf("1 %d\n",mid);
                fflush(stdout);
                l1++;
            }
            r=mid-1;
            fflush(stdout);
            scanf("%d",&ck);
            if(tk<c)
            {
                break;
            }
            if(ck==0)
            {
                break;
            }
            else if(ck==1||ck==-1)
            {
                mid=(l+r)/2;
                printf("2\n");
                fflush(stdout);
                printf("1 %d\n",mid);
                fflush(stdout);
                tk-=c;
            }
        }
        for(int i=mid+1; i<=n; i++)
        {
            printf("1 %d\n",i);
            tk--;
            fflush(stdout);
            scanf("%d",&ck);
            if(ck==1)
            {
                printf("2\n");
                fflush(stdout);
                printf("3 %d\n",i);
                fflush(stdout);
                break;
            }
            if(tk<1)
            {
                printf("1 %d\n",i);
                fflush(stdout);
                break;
            }
        }
    }
    return 0;
}
