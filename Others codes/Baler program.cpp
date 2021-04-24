#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,cas=0;
    cin>>t;
    while(t--)
    {
        cas++;
        int n;
        cin>>n;
        int a[10][10],c[10],i,j,cheak=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        if(n<5)
            printf("Case %d: 0\n",cas);
        else
        {
            if(n>=5)
            {


                for(i=0; i<n-4; i++)
                {
                    for(int k=0; k<=10; k++)
                        c[k]=0;
                    for(j=i ; j<5+i ; j++)

                    {
                        c[a[i][j]]++;
                        c[a[i+1][j]]++;
                    }
                    int k;
                    int f=1;
                    for(k=1; k<11; k++)
                    {
                        if(c[k]>1)
                       {
                           f=0;
                           break;
                       }
                    }
                    if(f==1)
                        cheak++;


                }


            }
            printf("Case %d: %d\n",cas,cheak);
    }
    }
    return 0;
}
