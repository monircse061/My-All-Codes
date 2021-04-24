#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cont,m,len,c;
    char s[10009];
    cin>>m;
    while(m--)
    {
        scanf("%s",s);
        c=0;
        cont=0;
        len=strlen(s);
        for(int i=0; i<len; i++)
        {

            if(s[i]!=s[i-1])
            {
                cont+=c*(c+1)/2;
                c=0;
            }
            c++;
        }
        cont+=c*(c+1)/2;
        cout<<cont<<endl;
    }
    return 0;
}
