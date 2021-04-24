#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
map<int,int>::iterator it;
int main()
{
    int n,num,x,t,a[100009];
    scanf("%d",&t);
    while(t--)
    {
        x=INT_MIN;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
            m[a[i]]++;
            if(x<m[a[i]])
            {
                x=m[a[i]];
            }
        }
        cout<<m.size()<<" "<<x<<endl;
        m.clear();
    }
    return 0;
}
