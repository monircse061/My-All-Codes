#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    s1=s;
    int x=0;
    if(s.length()==1&&s[0]>='a'&&s[0]<='z')
    {
        s[0]-=32;
        cout<<s;
    }
    else if(s.length()==1&&s[0]>='A'&&s[0]<='Z')
    {
        s[0]+=32;
        cout<<s;
    }
    else
    {
        for(int i=1; i<s.length(); i++)
        {

            if(s[i]>='A'&&s[i]<='Z'&&s[0]>='a'&&s[0]<='z')
            {
                s[i]+=32;
                x=1;
                if(i==s.length()-1){
                        s[0]-=32;
                    cout<<s;
                    return 0;
                }
                continue;
            }
            if(s1[i]>='A'&&s1[i]<='Z'&&s1[0]>='A'&&s1[0]<='Z'&&x==0)
            {
                s1[i]+=32;
                if(i==s.length()-1){
                        s1[0]+=32;
                    cout<<s1;
                    return 0;
                }
            }
            else if(s1[i]>='a'&&s1[i]<='z')
            {
                if(x==1)
                {
                    cout<<s1;
                    return 0;
                }
                else if(x==0)
                {
                    {
                        cout<<s;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
