#include<bits/stdc++.h>
using namespace std;
int cont[10000];
int main()
{
    int n,sum=0,l=0,z=0;
    string a;
    scanf("%d",&n);
    cin>>a;
    for(int i=0; i<n; i++)
    {
        if(a[i]-'0'==1)
        {
            sum+=a[i]-'0';

        }
        else if(a[i]-'0'==0)
        {
            z++;

        }
        if(a[i-1]-'0'==0&&a[i]-'0'==1)
        {

            {
                while(z>1)
                {
                    cont[l]=0;
                    l++;
                    z--;
                }
                z=0;
            }
        }


        if((a[i-1]-'0'==1&&a[i]-'0'==0)||(i==n-1&&sum>0))
        {
            cont[l]=sum;
            l++;
            sum=0;
        }
        if(i==n-1&&a[i]-'0'==0)
        {
            while(z>0)
            {
                cont[l]=0;
                l++;
                z--;
            }
            z=0;
        }
    }
    for(int i=0; i<l; i++)
    {
        printf("%d",cont[i]);
    }
    return 0;
}
