#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,cont=0,mod;
    scanf("%I64d %I64d",&n,&m);
    if(n<m)
    {
        long long int x=n;
        n=m;
        m=x;
    }
    if(n>=10)
    {
        cont+=(2*(n/10)*m);
        cont+=(2*(m/10)*(n%10));
    }
    mod=n%10;
    if(mod!=0){
        if(m%10!=0){
            for(long long int i=1;i<=m%10;i++){
                for(long long int j=1;j<=n%10;j++){
                    if((j+i)%5==0){
                        cont++;
                    }
                }
            }
        }
    }
    printf("%I64d",cont);
    return 0;
}
