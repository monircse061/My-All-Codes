#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char s1;
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        x=1;
        if(s.length()==1)
        {
            printf("-1\n");
        }
        else
        {
            for(int i=0,j=s.length()-1; i<j; i++,j--)
            {
                if(s[i]!=s[j])
                {
                    x=0;
                    break;
                }

            }
            if(x==0)
            {
                cout<<s<<endl;
            }
            else
            {
                for(int i=1; i<s.length(); i++)
                {
                    if(s[0]!=s[i])
                    {
                        s1=s[0];
                        s[0]=s[i];
                        s[i]=s1;
                        x=0;
                        break;
                    }
                }
                s1='\0';
                if(x==0)
                    cout<<s<<endl;
                else
                    printf("-1\n");
            }
        }
    }
    return 0;
}
