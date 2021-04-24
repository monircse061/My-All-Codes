#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ar[10000];
    int c=0,d=0,sum=1,sum1=1,sum2=1;
    scanf("%s",ar);
    int len=strlen(ar);
    for(int i=0; i<len; i++)
    {
        if(ar[i]=='c')
        {
            c++;
            if((ar[i-1]=='d'&&i!=len-1)||d>0)
            {
                for(int i=1; i<=d; i++)
                {
                    if(i==1)
                        sum*=10;
                    else
                        sum*=9;
                }
                sum2*=sum;
                sum=1;
                d=0;
            }
        }
        else if(ar[i]=='d')
        {
            d++;//cout<<1;
            if((ar[i-1]=='c'&&i!=len-1)||c>0)
            {
                for(int i=1; i<=c; i++)
                {
                    if(i==1)
                        sum1*=26;
                    else
                        sum1*=25;
                }

                sum2*=sum1;
                sum1=1;
                c=0;
            }
        }
        if(i==len-1)
        {
            if(ar[i]=='d')
            {
                for(int i=1; i<=d; i++)
                {
                    if(i==1)
                    sum*=10;
                    else
                        sum*=9;
                }//
                sum2*=sum;
                sum=1;
            }
            else if(ar[i]=='c')
            {
                for(int i=1; i<=c; i++)
                {
                    if(i==1)
                    sum1*=26;
                    else
                        sum1*=25;
                }//

                sum2*=sum1;
                sum1=1;
            }
        }
    }
    //cout<<d<<" "<<c;
    if(sum==1)
    {
        sum=0;
    }
    else if(sum1==1)
    {
        sum1=0;
    }
    printf("%d",sum2);
    return 0;
}
