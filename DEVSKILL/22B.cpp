#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
        int p=0,r=0,o=0,g=0,a=0,m=0,i1=0,n=0,c=0,d=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='p')
            {
                p++;
            }
            else if(s[i]=='r')
            {
                r++;
            }
            else if(s[i]=='o')
            {
                o++;
            }
            else if(s[i]=='g')
            {
                g++;
            }
            else if(s[i]=='a')
            {
                a++;
            }
            else if(s[i]=='m')
            {
                m++;
            }
            else if(s[i]=='i')
            {
                i1++;
            }
            else if(s[i]=='n')
            {
                n++;
            }
            else if(s[i]=='c')
            {
                c++;
            }
            else if(s[i]=='d')
            {
                d++;
            }

        }
        //cout<<p<<r<<o<<g<<a<<m<<i1<<n;
        if((p>=1&&r>=2&&o>=1&&g>=2&&a>=1&&m>=2&&i1>=1&&n>=1)||(c>=1&&o>=1&&d>=1&&i1>=1&&n>=1&&g>=1))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
