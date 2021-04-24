#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ar[100][100],s,a1=0,b1=0,a=0,b=0,sum=0,sum1=0;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        a=0,b=0;
        for(int j=0; j<m; j++)
        {
            scanf("%d",&ar[i][j]);
            if(ar[i][j]==0)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        sum+=(a/2)+(b/2);

    } //cout<<sum<<" "<<endl;
    for(int i=0; i<m; i++)
    {
        a1=0,b1=0;
        for(int j=0; j<n; j++)
        {
            if(ar[j][i]==0)
            {
                a1++;
            }
            else
            {
                b1++;
            }
        }
        sum1+=(a1/2)+(b1/2);
        //cout<<sum1<<" "<<endl;
    }
    s=sum+sum1+(n*m);
    printf("%d",s);
    return 0;
}
