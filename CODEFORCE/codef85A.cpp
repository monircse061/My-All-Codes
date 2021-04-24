#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]>='a'&&s1[i]<='z')
        {
            s1[i]-=32;
        }
        if(s2[i]>='a'&&s2[i]<='z')
        {
            s2[i]-=32;
        }
        if(s1[i]>s2[i])
        {
            printf("1");
            return 0;
        }
        else if(s2[i]>s1[i])
        {
            printf("-1");
            return 0;
        }
    }
    printf("0");
    return 0;
}
