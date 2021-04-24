#include<bits/stdc++.h>
#define val 10000
/**In this calendar there are 31 days in January,
 28 or 29 days in February (depending on whether the year is leap or not),
  31 days in March, 30 days in April,
  31 days in May, 30 in June, 31 in July, 31 in August, 30 in September,
31 in October, 30 in November, 31 in Decembe**/
using namespace std;
int main()
{
    int a[val],a1[val],i,j,n,m,l,x,m1;
    a1[0]=31,a1[2]=31,a1[3]=30,a1[4]=31,a1[5]=30,a1[6]=31,a1[7]=31,a1[8]=30,
    a1[9]=31,a1[10]=30,a1[11]=31,a1[12]=31,a1[14]=31,a1[15]=30,a1[16]=31,
a1[17]=30,a1[18]=31,a1[19]=31,a1[20]=30,a1[21]=31,a1[22]=30,a1[23]=31,
    a1[24]=31,a1[26]=31,a1[27]=30,a1[28]=31,a1[29]=30,a1[30]=31,a1[31]=31,a1[32]=30,
                a1[33]=31,a1[34]=30,a1[35]=31;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=36-n; i++)
    {
        l=i;
        x=1;

        m1=0;
        for(j=0; j<n; j++)
        {

            if(a[j]==29)
             m1++;
            if(m1<=1&&a1[l]==0&&(a[j]==28||a[j]==29)&&(a[j+1]!=29||a[j+1]!=28))
            {
                l++;
                continue;
            }
            if((a[j]!=a1[l]))
            {
                x=0;
                break;
            }
            l++;
            //if(l==12){l=0;}

        }
        if(x==1)
        {
            printf("Yes");
            break;
        }
    }
    if(x==0)
    {
        printf("No");
    }
    return 0;
}

