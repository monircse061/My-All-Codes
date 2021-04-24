#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,i1=0,s=0,x=1,z,j=0,sum,t,a[100000];
    cin>>n;
    for(int i=1; ; i++)
    {
        s=0;
        k=i;
        while(k>0)
        {
            s=s+k%10;
            k=k/10;
            if(s>10)
            {
                break;
            }
        }
        if(s==10)
        {
            j++;
            a[j]=i;
        }
        if(j==n){
            break;
        }
    }
    cout<<a[n]<<endl;
    return 0;
}
