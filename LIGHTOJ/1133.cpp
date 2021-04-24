#include<bits/stdc++.h>
using namespace std;
char s1;
int a[10000];
int main()
{
    int i,j,m,n,t,z=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        for(int i=0; i<m; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int l=0; l<n; l++)
        {
            cin>>s1;
            if(s1=='S')
            {
                int x;
                scanf("%d",&x);
                for(int i=0; i<m; i++)
                {
                    a[i]+=x;
                }
            }
            else if(s1=='M')
            {
                int x;
                scanf("%d",&x);
                for(int i=0; i<m; i++)
                {
                    a[i]=a[i]*x;
                }
            }
            else if(s1=='D')
            {
                int x;
                scanf("%d",&x);
                for(int i=0; i<m; i++)
                {
                    a[i]=a[i]/x;
                }
            }
            else if(s1=='R')
            {
                reverse(a,a+m);
            }
            else if(s1=='P')
            {
                int x,y,c;
                scanf("%d %d",&x,&y);
                c=a[x];
                a[x]=a[y];
                a[y]=c;

            }
        }
        z++;
        cout<<"Case "<<z<<":"<<endl;
        for(int i=0; i<m; i++)       \
        {
            cout<<a[i];
            if(i<m-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
