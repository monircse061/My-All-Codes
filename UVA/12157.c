#include<stdio.h>
int main()
{
    int a[1000],i,j,m=0,ju=0,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        for(j=0;j<=a[i]/30;j++)
            {m=m+10;}
            for(j=0;j<=a[i]/60;j++)
            {
                ju=ju+15;
            }
        }
       if(ju<m)
        printf("juice\n");
        else if(m<ju)
            printf("mile");
    else if(m==ju)
        printf("mj");
    return 0;

}
