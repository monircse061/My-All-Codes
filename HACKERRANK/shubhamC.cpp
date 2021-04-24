#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,a[100009],mul;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        mul=1;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        int i=1,j=1,num=0,i1=1;
        while(j<=i&&i<=n)
        {
            //if(mul<=k)//||i1<k
            {

                mul*=a[i];
            }//cout<<mul<<" ";

             if(mul==k)
            {

                num++;
                //mul/=a[j];
            }
            else if(mul>k)
            {
                mul/=a[j];
                i1=mul;
                j++;if(mul==k){num++;i++;}
                if(i==j)mul=1;
                continue;
            }
            i++;
        }
        printf("%d",num);
    }
    return 0;
}
