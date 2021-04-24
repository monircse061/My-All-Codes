/**#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll n,num1,num=1,i=1;
   scanf("%I64d",&n);
   if(n==1){
    printf("1");
   }
   else{
    while(1){
        num+=pow(2,i);
        if(n<=num){
            printf("%I64d",i+1);
            break;
        }
        i++;
    }
   }
   return 0;
}
/***#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a,b,c,m,res=1,ans,x,y;
void euclid(ll c,ll m)
{
    if(m==0)
    {
        x=1;
        y=0;
    }
    else
    {
        euclid(m,c%m);
        ll temp=x;
        x=y;
        y=temp-(c/m)*y;
    }
}
ll modulo(ll c,ll m)
{
    euclid(c,m);

    return ((x%m)+m)%m;
}
int main()
{

    scanf("%lld %lld %lld %lld",&a,&b,&c,&m);
    while(b>0)
    {
        if(b%2==1)
        {
            res=(res*a)%m;
        }
        a=(a*a)%m;
        b/=2;
    }
    ll x1=modulo(c,m);
    ans=(res%m)*(x1%m)%m;
    printf("%lld",ans);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cont=1;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(std::__gcd(i,n)==1){
            cont++;
        }
    }
    printf("%d",cont);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,m,a[100],cont=0,num,mul=1,mul1=1,res;
    scanf("%lld %lld",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        if(a[i]%2==0){
            cont++;
        }
    }
    num=cont;
   for(int i=1;i<=m;i++){
       mul*=num;
       num--;
   }
   num=m;
   for(int i=1;i<=m;i++){
       mul1*=i;
   }
   res=mul/mul1;
   printf("%lld",res);
   return 0;
}
**/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;string s,s1;
    scanf("%d",&n);

        while(n>0){
            p=n%2;
            n/=2;
            s+=p+48;
        }
       reverse(s.begin(),s.end());
       s+='.';
  cout<<s;
   return 0;
}








