#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],n,x,y,t;
    scanf("%d",&t);
    while(t--)
    {
        y=0;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);

            if(i==0){x=a[0];continue;}
            if(x>a[i])
            {
                x=a[i];

            }
        }

        for(int i=0; i<n; i++)
        {
            y=y+abs(x-a[i]);
        }
        if(n==1){
            cout<<"0"<<endl;
        }
        else
cout<<y<<endl;
    }
    return 0;
}
