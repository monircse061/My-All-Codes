#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[1000009],l=0,ar[1000009];
void fun()
{
    for(int i=1; i<=1000009; i++)
    {
        a[i]=0;
    }
}
int main()
{
    //fun();
    ll t,n,num,cont,x,y,one,three,sum,cont1,cont2,sum1,sum2,n1,n2;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        cont=0,x=0,y=0,one=0,three=0,sum=0,cont1=0,cont2=0,sum1=0,sum2=0,n1=0,n2=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&ar[i]);
            if(ar[i]==1)
            {
                one++;
                x=1;
            }
            if(ar[i]==3)
            {
                three++;
                y=1;
            }
            a[ar[i]]++;
        }
        if(n==1)
        {
            printf("%lld\n",cont);
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(ar[i]%2==0)
                {
                    if(a[ar[i]]>1)
                    {
                        sum=(a[ar[i]]-1);
                        sum1+=(sum*(sum+1))/2;
                        a[ar[i]]=0;
                    }
                    n1++;
                }
                else if(a[ar[i]]==1&&ar[i]%2==0)
                {
                    a[ar[i]]=0;
                    n1++;
                }
                else if(a[ar[i]]==1)
                {

                    a[ar[i]]=0;
                    n2++;
                }
                else if(ar[i]%2!=0)
                {
                    if(a[ar[i]]>1)
                    {
                        sum=a[ar[i]]-1;
                        sum2+=(sum*(sum+1))/2;
                        a[ar[i]]=0;//cout<<sum2<<" "<<1;
                    }
                    n2++;
                }
            }
            n1--;
            n2--;
            if(n1<0)n1=0;
            if(n2<0)n2=0;
            cont1=(n1*(n1+1))/2;
            cont2=(n2*(n2+1))/2;
            cont2-=(one*three);
            if(cont1>=sum1)
            {
                cont1-=sum1;
            }
            else{cont1=0;}
            if(cont2>=sum2)
            {
                cont2-=sum2;
            }
            else{cont2=0;}

            //cout<<cont1<<endl;
            //cout<<cont2<<" "<<cont1;
            printf("%lld\n",cont1+cont2);
        }
        fun();
    }
    return 0;
}
