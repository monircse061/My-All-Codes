#include<stdio.h>
#define sf scanf
#define pf printf
#define val 2000000
bool a[val];


int main()
{
    int i,j,n,m=0,k,p,b[val],x[val];
    scanf("%d",&n);
    for(i=2; i<=val; i+=2)
        a[i]=true;
    for(i=3; i*i<=val; i+=2)
    {
        if(a[i]==false)
        {
            for(j=3; i*j<val; j+=2)
                a[i*j]=true;
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
            x[i]=b[p];
        }
    }
    printf("%d %d",x[n],x[n]+2);
    return 0;
}
