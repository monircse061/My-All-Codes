#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=1,y=1,z=1;
    for(int i=0,j=s.length()-1; i<j; i++,j--)
    {
        if(s[i]-48==0&&x==1)
        {
            if(j<s.length())
            {
                j++;
            }
            //continue;
        }//cout<<s[j]-48<<" ";
        else if(s[j]-48==0&&y==1)
        {
            //cout<<1;
            if(i>-1)
            {
                i--;
            }
            //continue;
        }
        else if(s[i]-48==s[j]-48)
        {
            x=0,y=0;
        }
        else
        {
            z=0;
            break;
        }
    }
    if(z==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}
