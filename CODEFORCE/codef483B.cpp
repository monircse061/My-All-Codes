#include<bits/stdc++.h>
using namespace std;
string s[10000];
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i=0; i<x; i++)
    {
        cin>>s[i];
    }
    int m=1;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            int n=1,cont=0;
            if(s[i][j]=='.')
            {
                if(j-1>-1)
                {
                    if(s[i][j-1]=='*')
                    {
                        m=0;
                    }
                }
                if(j+1<y)
                {
                    if(s[i][j+1]=='*')
                    {
                        m=0;
                    }
                }
                if(i-1>=0)
                {
                    if(s[i-1][j]=='*')
                    {
                        m=0;
                    }
                }
                if(i-1>-1&&j-1>-1)
                {
                    if(s[i-1][j-1]=='*')
                    {
                        m=0;
                    }
                }
                if(i-1>-1&&j+1<y)
                {
                    if(s[i-1][j+1]=='*')
                    {
                        m=0;
                    }
                }
                if(i+1<x)
                {
                    if(s[i+1][j]=='*')
                    {
                        ///11
                        m=0;
                    }
                }
                if(i+1<x&&j+1<y)
                {
                    if(s[i+1][j+1]=='*')
                    {

                        m=0;
                    }
                }
                if(i+1<x&&j-1>-1)
                {
                    if(s[i+1][j-1]=='*')
                    {
                        m=0;
                    }
                }

            }
            else if(s[i][j]!='*')
            {
                if(j-1>-1)
                {
                    if(s[i][j-1]=='*')
                    {
                        cont++;
                    }
                }
                if(j+1<y)
                {
                    if(s[i][j+1]=='*')
                    {
                        cont++;
                    }
                }
                if(i-1>=0)
                {
                    if(s[i-1][j]=='*')
                    {
                        cont++;
                    }
                }
                if(i-1>-1&&j-1>-1)
                {
                    if(s[i-1][j-1]=='*')
                    {
                        cont++;
                    }
                }
                if(i-1>-1&&j+1<y)
                {
                    if(s[i-1][j+1]=='*')
                    {
                        cont++;
                    }
                }
                if(i+1<x)
                {
                    if(s[i+1][j]=='*')
                    {
                        ///11
                        cont++;
                    }
                }
                if(i+1<x&&j+1<y)
                {
                    if(s[i+1][j+1]=='*')
                    {

                        cont++;
                    }
                }
                if(i+1<x&&j-1>-1)
                {
                    if(s[i+1][j-1]=='*')
                    {
                        cont++;
                    }
                }
                if(s[i][j]-48!=cont)
                {
                    m=0;
                }
            }

           if(m==0){
                    break;
                }
        }
        if(m==0){
                    break;
                }
    }
    if(m==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
