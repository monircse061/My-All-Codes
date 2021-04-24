#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a2[100],a3[100],a4[100];
    a2[1]=2,a2[2]=4,a2[3]=8,a2[4]=6;
    a3[1]=3,a3[2]=9,a3[3]=7,a3[4]=1;
    a4[1]=4,a4[2]=6,a4[3]=4,a4[4]=6;
    int len=s.length();
    int n=s[len-1]-'0';
    if(n==0&&len<2)
    {
        printf("4");
    }
    else if(n<=4&&len<2)
    {
        printf("%d",(1+a2[n]+a3[n]+a4[n])%5);
    }
    else
    {
        if(len>=2){
            n=(s[len-2]-'0')*10+(s[len-1]-'0');
        }
        int mod=n%4;
        if(mod==0){
            mod=4;
        }//cout<<mod<<endl;
        printf("%d",(1+a2[mod]+a3[mod]+a4[mod])%5);
    }
    return 0;
}
