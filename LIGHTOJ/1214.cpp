#include<bits/stdc++.h>
using namespace std;
char s[1000000];
int main()
{

    long long int n,k,t,j=0,n1;
    cin>>t;
    while(t--)
    {
         scanf("%s",s);
        cin>>n1;
        n=abs(n1);
        k=0;
        int len=strlen(s);
        for(int i=0; i<len; i++)
        {
            if(s[i]!='-')
            {k=(k*10)+(s[i]-48);
            k=k%n;}
        }
        j++;
        if(k==0)
        {
            cout<<"Case "<<j<<":"<<" divisible"<<endl;
        }
        else
        {
            cout<<"Case "<<j<<":"<<" not divisible"<<endl;
        }
    }
    return 0;
}
