#include<bits/stdc++.h>
using namespace std;
int cont[100009];
int main()
{
    char s[100009];
    int len,c=0;
    scanf("%s",s);
    len=strlen(s);
    for(int i=0; i<len; i++)
    {
        cont[s[i]]++;
        if(cont[s[i]]==1)
        {
            c++;
        }
    }
    if(len<4||c==1||c>4)
    {
        cout<<"no"<<endl;
    }
    else if(c==2)
    {
        int x=1;
        for(int i=97; i<123; i++)
        {
            if(cont[i]!=0)
            {
                if(cont[i]<2)
                {
                    x=0;
                    cout<<"no"<<endl;
                    break;
                }
            }
        }
        if(x==1)
            cout<<"yes"<<endl;
    }
    else if(c==3&&len>=4)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"yes"<<endl;
    }
    return 0;
}
