#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define val 20000000
using namespace std;
bool a[val];
int b[val];
int twin_prime[val];


void prime()
{
    int i,j,k,p;
    for(i=2; i<=val; i+=2)
        a[i]=1;
    for(i=3; i*i<=val; i+=2)
    {
        if(a[i]==0)
        {
            for(j=3; i*j<val; j+=2)
                a[i*j]=1;
        }
    }
     k=1;
    for(i=3; i<val; i++)
    {
      if(a[i]==0)
        {
            b[k]=i;
            k++;
        }
    }
    i=0;
    for(p=1; p<k; p++)
    {
        if(b[p+1]-b[p]==2)
        {
            i++;
            twin_prime[i]=b[p];
        }
    }

}
int main()
{

    prime();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
     printf("(%d, %d)\n",twin_prime[n],twin_prime[n]+2);
    }
    return 0;
}
