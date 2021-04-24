#include<bits/stdc++.h>
using namespace std;
#define ll long long int
/**int main(){
   int n,k,a[10000],cont,num=0,l=0;
   scanf("%d %d",&n,&k);
   //for(int i=1;i<=n;i++){
   // scanf("%d",&a[i]);
   //}
   if(k>=n||k==n-1){
    printf("1\n");
    printf("%d",n);
   }
   else{
    for(int i=1;i<=n;i++){
        cont=1;
        while(cont<=k&&(k*2)<n-i){
            cont++;i++;
        }
        l++;i--;
        a[l]=i;num++;
        if(i+1<=n){i++;}
        cont=1;
        while(cont<=k){
            cont++,i++;
        }
        //if(i<=n){


       // }
    }
    printf("%d\n",num);
    for(int i=1;i<=l;i++)
        printf("%d ",a[i]);
   }
   return 0;
}**/
int in() {
    int n;
    scanf("%d",&n);
    return n;
}

ll Lin() {
    ll n;
    scanf("%lld",&n);
    return n;
}

double Din() {
    double n;
    scanf("%lf",&n);
    return n;
}

const ll inf = 1e17;
const ll mod = 1e9 + 7;
const int N = 3e5 + 5;




int main() {
    int n=in(), k=in();
    if(k==0) {
        printf("%d\n", n);
        for(int i=1;i<=n;i++)
            printf("%d ", i);
        printf("\n");
        return 0;
    }
    int l=k;
    k=2*k+1;
    if(k>=n) return !printf("1\n%d\n", min(n, l+1));

    int ans=n/k;

    if(n%k==0) {
        printf("%d\n", ans);
        int pos=l+1;
        for(int i=1; i<=ans; i++) {
            printf("%d ", pos);
            pos+=k;
        }
        return 0;
    }
    ans++;
    printf("%d\n", ans);
    for(int i=l+1; i>=1; i--) {
        int cur=0, pos=i;
        while(pos<=n) cur++, pos+=k;
        if(cur==ans) {
            pos=i;
            while(pos<=n) printf("%d ", pos), pos+=k;
            printf("\n");
            return 0;
        }

    }
    return 0;
}


