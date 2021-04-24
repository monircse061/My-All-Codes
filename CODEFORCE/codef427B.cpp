#include<bits/stdc++.h>
using namespace std;
long long int a[10000000];
int main()
{
    long long int k,n1,n,l=0,sum=0,sum1,cont=0,p;
    string s;
    scanf("%I64d",&k);
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        p=s[i]-'0';
        a[l]=p;
        sum+=p;
        l++;
    }
    sort(a,a+l);
    //for(int i=0; i<l; i++)
    {
        //cout<<a[i]<<" ";
    }
    if(sum>=k)
    {
        printf("0");
    }
    else
     {
         for(int i=0; i<l; i++)
         {
             sum1=9-a[i];
             if(sum1>0)
             {
                 sum+=sum1;
                 cont++;
                 if(sum>=k)
                 {
                     printf("%I64d",cont);
                     break;
                 }
             }
         }
     }
    return 0;
}
