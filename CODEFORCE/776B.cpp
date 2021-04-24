#include<bits/stdc++.h>
using namespace std;
int l=1,cont[100009];
void fun()
{
    for(int i=2; i*i<=100000+1; i++)
    {
        if(cont[i]==0)
        {
            for(int j=2; i*j<=100000+1; j++)
            {
                cont[i*j]=1;
            }
        }
    }
}
int main()
{
    int n,l1,l2;
    fun();
    scanf("%d",&n);
    if(n<=2)
        printf("1\n");
    else
    printf("2\n");
    for(int i=2; i<=n+1; i++)
    {
          if(cont[i]==0)
            printf("1 ");
          else
            printf("2 ");
    }
    return 0;
}
