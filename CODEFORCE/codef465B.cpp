#include<bits/stdc++.h>
using namespace std;
char s[100009];
int main()
{
    int x=0,y=0,l=0,k=1,n;

    while(scanf("%d",&n)!=EOF)
    {
        scanf("%s",s);
        x=0,y=0,l=0,k=1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='R'&&i==0)
                k=0;
            if(s[i]=='U')
                y++;
            else
            {
                x++;
            }
            if(x==y-1&&k==0)
            {
                l++;
                k=1;
            }
            else if(y==x-1&&k==1)
            {
                l++;
                k=0;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}
