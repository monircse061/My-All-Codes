#include<bits/stdc++.h>
using namespace std;
string s,s1;
int digit,cont=0,p;
void fun(int n)
{
    digit=0;
    while(n>0)
    {
        p=n%2;
        n/=2;
        digit++;
        s+=(p+48);
    }
    for(int i=digit; i<8; i++)
    {
        s+='0';
    }
    reverse(s.begin(),s.end());
    s1+=s;
    cont++;
    if(cont<4)
    {
        s1+='.';
    }
    s="";
}
int main()
{
    int t,j=0;
    string ch,ch1;
    scanf("%d",&t);
    while(t--)
    {
        cin>>ch>>ch1;
        int num=0,num1=0;
        for(int i=0; i<ch.length(); i++)
        {
            num=num*10+(ch[i]-48);
            if(ch[i+1]=='.'||i+1==ch.length())
            {
                num1=num;
                num=0;
                i++;
                fun(num1);
                num1=0;
            }
            if(ch.length()-1==i)
            {
                fun(num1);
            }
        }
        //cout<<s1<<endl;
        j++;
        if(s1==ch1)
        {
            printf("Case %d: Yes\n",j);
        }
        else
        {
            printf("Case %d: No\n",j);
        }
        s1="";
        cont=0;
    }
    return 0;
}
