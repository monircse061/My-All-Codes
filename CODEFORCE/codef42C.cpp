#include<bits/stdc++.h>
using namespace std;
char s[1000009];
int main()
{
    scanf("%s",s);
    long long int len,sum,cont,y=0;
    len=strlen(s);
    for(long long int i=1; i<=50000; i++)
    {
        long long int x=i*i,cont=0,m,p;
        p=x;
        long long int j=len-1;
        while(x!=0)
        {
            long long int ch=(x%10)+48;
            x=x/10;
            m=1;
            for(; j>=0; j--)
            {
                if(ch==s[j])
                {
                    cont++;
                    j--;
                    m=0;
                    break;
                }
            }
            if(m==1)
            {
                break;
            }
        }
        if(m==1)
        {
            continue;
        }
        if(y<cont)
            y=cont;
    }
    if(y!=0)
        cout<<len-y<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
