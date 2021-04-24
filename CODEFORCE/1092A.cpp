#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,x,n1;

    scanf("%d",&t);
    while(t--)
    {
        string s;
        int n,k;
        scanf("%d %d",&n,&k);
        x=1;n1=k;
        for(int i=1,j=1; i<=n; i++,j++)
        {
            s+=(96+j);k--;
            if(k==0){
                j=0;k=n1;
            }
        }

        cout<<s<<endl;
        s="";
    }
    return 0;
}
