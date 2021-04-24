#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],n,x=0,y=0,sum=0,z,sum1,x1=0,y1=0,cont=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        z=1;
        if(a[i]==2)
        {
            x=i;
            while(a[i]==2)
            {
                i++;
                while(a[i]==1)
                {
                    i++;
                    if(a[i]==2||i>n)
                    {
                        y=i-1;
                        sum1=y-x;
                        z=0;
                        if(sum<sum1)
                        {
                            sum=sum1;
                            x1=x;y1=y;
                            break;
                        }
                    }
                }
                if(z==0)
                {
                    i--;
                    break;
                }
            }
        }
    }
    if(sum!=0){
    sort(a+x1,a+y1+1);}
    for(int i=1;i<=n;i++){
            cont++;
        if(a[i]==2){
            if(a[i+1]==1){break;}
        }
    }
    cout<<cont;
    return 0;
}
