#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cont=0,sum=0,sum1=0,l;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(sum==0)
        {
            l=i;
        }
        if((s[i]-'0')%3==0)
        {
            sum=0;
            cont++;
        }
        else
        {
            sum+=s[i]-'0';
            if(sum%3==0)
            {
                sum=0;
                cont++;
            }
            else
            {
                sum1=sum;
                while(l<i-1)
                {
                    sum1-=s[l]-'0';
                    if(sum1%3==0)
                    {
                        sum=0;
                        cont++;
                    }
                    l++;
                }
            }
        }
    }
    printf("%d",cont);
    return 0;
}
