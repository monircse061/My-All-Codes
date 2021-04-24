#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],mid,h,l,i,n,m,x=0;
    scanf("%d %d",&n,&m);
    l=0;h=n-1;
    mid=(h+l)/2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(l<h&&a[0]<a[1])
    {

        if(a[mid]>m)

                h=mid-1;


        else if(a[mid]<m)
            //if(a[mid+1]<=m)
        {l=mid+1;}


         mid=(h+l)/2;
         if(a[mid]==m)
        {
            x=1;
            printf("%d",mid+1);
            break;
        }

    }
    while(l<h&&a[0]>a[1])
    {

        if(a[mid]>m)

                l=mid+1;


        else if(a[mid]<m)
            //if(a[mid+1]<=m)
        {h=mid-1;}


         mid=(h+l)/2;
         if(a[mid]==m)
        {
            x=1;
            printf("%d",mid+1);
            break;
        }

    }
    if(x==0)
        printf("not found");
    return 0;
}
