#include<bits/stdc++.h>
using namespace std;
#define val 100000
int  a;double b=2.3;
int main()
{     a=b;char s[100];
   scanf("%s",s);
    for(int i=0;i<4;i++)
     cout<<s[i];
    /**long long int t,n,m,p,j,i,y,l,x,c;
    scanf("%lld",&t);
    while(t--)
    {
        i=0;
        x=1;
        y=1;
        scanf("%lld",&m);
        n=m;
        while(n>0)
        {
            p=n%2;
            n=n/2;
            a[i]=p;
            if(a[i]==0)
            {
                x=0;
            }
            else if(n!=0)
            {
                y=0;
            }
            i++;
        }
        l=i;

        /**if(x==0&&y==0){
            for(j=l-2;j>=0;j--){
                if(a[j]==0){
                    c=a[j];
                    a[j]=a[j-1];
                    a[j-1]=c;
                    break;
                }
            }
        }
        else
        {
            //for(j=l;j>0;j--){
                //if(j==1){
                a[l]=a[l-1];
                a[l-1]=0;

                    //continue;
                //}
                l=l+1;
            }


        for(i=l-1; i>=0; i--)
        {
            printf("%lld",a[i]);
        }
    }**/
    return 0;
}
