#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    scanf("%s",s);
    int x=0,y=0,cont=0;
    int len=strlen(s);
    for(int i=len-1; i>=0; i--)
    {
        if(s[i]=='0'&&cont<6)
        {
            cont++;
            x=1;
        }
        if(s[i]=='1'&&cont==6)
            {
                y=1;
                break;
            }
    }
    if(x==1&&y==1)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}
