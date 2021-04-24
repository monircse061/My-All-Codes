#include<bits/stdc++.h>
using namespace std;
map<int,int>m,m1;
int main()
{
    long long int n,f1=0,f2=1,f=0,l=3;
    m[1]=0,m[2]=1;
    m1[0]=1,m1[1]=2;
    scanf("%I64d",&n);//m[1000000000]=0;
    while(f<=1000000000)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        //if(f>1000000000-10)cout<<f<<" ";
        m[l]=f,m1[f]=l;
        l++;
    }
    int pos=m1[n];
    //cout<<m[1000000000];
    int a=m[pos-2],b=m[pos-2],c=m[pos-3];
    if(n==1)
    {
        printf("1 0 0");
    }
    else if(pos==0)
    {
        printf("I'm too stupid to solve this problem");
    }
    else
    {
        printf("%d %d %d",a,b,c);
    }
    return 0;
}
