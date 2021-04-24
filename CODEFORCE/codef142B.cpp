#include<bits/stdc++.h>
using namespace std;

int cont[10000000];
void fun()
{
    for(int i=2; i*i<=1000000; i++)
    {
        if(cont[i]==0)
        {
            for(int j=2; i*j<=1000000; j++)
            {
                cont[i*j]=1;
            }
        }
    }
}

int main()
{
    int n;
    long long int a[100009];
    fun();
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        double n1=sqrt(a[i]);
        int n2=sqrt(a[i]);
        if(n1==n2&&n1!=1&&cont[n2]==0)
        {
                printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
