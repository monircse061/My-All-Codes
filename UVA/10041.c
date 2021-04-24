#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,a[100],t;
    scanf("%d",&t);
    while(t--)
          {scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    j=a[0];
    for(i=0; i<n-1; i++)
    {
        if(a[0]<a[i+1])
        {
            a[0]=a[i+1];
        }
    }
    for(i=0; i<n-1; i++)
    {
        if(j>a[i+1])
        {
            j=a[i+1];
        }
    }
    printf("%d\n",abs(a[0]-j));}

    return 0;
}
