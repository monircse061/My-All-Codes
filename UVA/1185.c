#include<stdio.h>
#include<math.h>
double  a[10000000];
int main()
{
    int  i,n,b,t;a[1]=1;
    for(i=2; i<=10000000; i++)
    {
        a[i]=a[i-1]+log10(i);
    }
    scanf("%d",&t);
    while(t--){
            scanf("%d",&n);
    printf("%d\n",(int)a[n]);}
    return 0;
}
