#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x=0,s,p;
    int a[1000];
    for(i=0; i<6; i++)
    {
        scanf("%d",&a[i]);
        x=x+a[i];
    }
    p=0;//printf("%d",x);
    if(x%2!=0)
    {
        printf("NO\n");
    }
    else if(x==0){
         printf("YES\n");
    }
    else
    {
        for(i=1; i<5; i++)
        {
         s=0;
            for(j=i+1; j<6; j++)
            {
                s=s+(a[0]+a[i]+a[j]);
                //printf("%d\n",s);
                if((s*2)==x)
                {
                    p=1;
                    printf("YES\n");
                    break;
                }
                s=0;
            }
            if(p==1)
            {
                break;
            }
        }
        if(p==0)
        {
            printf("NO\n");
        }
    }
    return 0;
}
