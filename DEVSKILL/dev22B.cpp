#include<bits/stdc++.h>
using namespace std;
int cont[10000];
int main()
{
    int sum,j,k,t,p,a[100000],n,x=-1,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        j=0;
        for(int i=1; i<101; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=100, j=1; i>=1; i--,j++)
        {
            cont[j]=cont[j-1]+a[i];
        }
        for(int i=1; i<101; i++){
                l=cont[i]-cont[j];
                if(l>=k)
                {
                    p=i-j;
                    //cout<<p<<" "<<endl;
                    if(x<p)
                    {
                        x=p;
                        j++;
                    }
                }
            }
        cout<<p<<endl;
    }
    return 0;
}
