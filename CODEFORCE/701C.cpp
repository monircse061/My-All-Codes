#include<bits/stdc++.h>
using namespace std;
int cont[205];
void fun()
{
    for(int i=0; i<=200; i++)
    {
        cont[i]=0;
    }
}
int main()
{
    int n,x=0,sum=0,num=0,ans=INT_MAX,j;
    scanf("%d",&n);
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        cont[s[i]]++;
        if(cont[s[i]]==1)
        {
            sum++;
        }
    }
    fun();
    j=0;
    for(int i=0; i<n; i++)
    {
        cont[s[i]]++;
        if(cont[s[i]]==1)
        {
            num++;
        }
        while(num==sum)
        {
            if(1)
            {
                int k=i-j+1;
                ans=min(ans,k);
                cont[s[j]]--;
                if(cont[s[j]]==0)
                {
                    num--;
                }
                j++;
            }
        }
    }
     printf("%d",ans);
    return 0;
}
