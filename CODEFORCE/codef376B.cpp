#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  ch='a'-96,len,len1,sum=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        int len=abs(ch-(s[i]-96));
        int len1=abs(26-len);
        if(len<len1)
        {
            sum+=len;
        }
        else
        {
            sum+=len1;
        }
        ch=s[i]-96;

    }
    cout<<sum;
    return 0;
    //cout<<ch;
}
