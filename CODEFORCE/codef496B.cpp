#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int len1,len2,len,cont=0,x=1,y=0,l=0,l1,l2;
    cin>>s>>s1;
    len1=s.length();
    len2=s1.length();
    len=max(len1,len2);
    l1=len1;
    l2=len2;
    for(int i=0; i<len; i++)
    {
        if(len1>len2)
        {
            len1--;
        }
        else if(len2>len1)
        {
            len2--;
        }
        else
        {
            if(l1>l2)
            {
                if(s[i]==s1[l]&&y==0)
                {
                    y=1;
                    cont++;
                    l++;
                    x=1;
                    continue;
                }
                if(y==1&&s[i]!=s1[l])
                {
                    x=0;
                    y=0;
                    cont=0;
                }
                else if(y==1)
                {
                    cont++;
                }l++;
            }
            else
            {
                if(s[l]==s1[i]&&y==0)
                {
                    y=1;
                    x=1;
                    cont++;
                    l++;
                    continue;
                }
                if(y==1&&s[l]!=s1[i])
                {
                    x=0;
                    cont=0;
                    y=0;
                }
                else if(y==1)
                {
                    cont++;
                }l++;
            }
        }
    }
    if(x==1)
    {
        printf("%d",(l1+l2)-cont*2);
    }
    else
    {
        printf("%d",l1+l2);
    }
    return 0;
}
