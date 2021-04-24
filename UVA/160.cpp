/**#include<bits/stdc++.h>
using namespace std;
int prime[1000],p,mark[1005];

void pri() {
    prime[p++]=2;
    int l=sqrt(1000)+1;
    for(int i=3; i<=1000; i+=2) {
        if(!mark[i]) {
            prime[p++]=i;
            if(i<=l) {
                for(int j=i*i; j<=1000; j+=i*2) {
                    mark[j]=1;
                }
            }

        }
    }

}
int main() {
    int n;
    pri();
    while(scanf("%d",&n)==1) {
            if(n==0)
            break;
        printf("%3d! =",n);
        for(int i=0; prime[i]<=n; i++) {
            int c=0;
            for(int j=prime[i]; j<=n ; j+=prime[i]) {

                int l=j;
                while(l%prime[i]==0 && l>0) {
                    l/=prime[i];
                    c++;

                }
               // cout<<prime[i]<<endl;
            }
            if(c==0)
                break;
            if(i==15)
                printf("\n      ");

             printf("%3d",c);
        }
        printf("\n");

    }
    return 0;}**/
#include<bits/stdc++.h>
using namespace std;
long long b [50] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
long long  a[110];
int main()
{
    long long n,p,p1=0,l1,x,k,i;
    while(scanf("%lld",&n)!=EOF){
       l1=0;
     if(n==0){break;}
    for(int j=2; j<=n; j++)
    {p=j;i=0;k=0;
        while(b[i]<=j&&p>1){
            while(p%b[i]==0)
            {
                p=p/b[i];
                a[b[i]]++;
            }i++;
        }
    }
    printf("%3lld! =",n);
    for(int l=2; l<=n; l++)
    {    x=1;
        if(a[l]!=0)
            {l1++;x=0;printf("%3lld",a[l]);
           a[l]=0;}
            if(l1==15&&x==0){printf("\n%6c",' ');}

    }
printf("\n");
  }
    return 0;
}
