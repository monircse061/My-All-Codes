#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,num=0;
    string s;
    scanf("%d",&n);
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='x')
        {
            sum++;
        }
        else
        {
            if(sum>2)
            {
                num+=(sum-2);
            }
            sum=0;
        }
    }
    if(sum>2)
    {
        num+=(sum-2);
    }
    printf("%d",num);
    return 0;
}
