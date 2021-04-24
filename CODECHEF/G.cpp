#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<int,int>cont,prime,div1;
int l;
void scieve(){
     l=2;
    prime[1]=2;
    int x=sqrt(1000000000);
    for( int i=3;i<=x;i+=2){
        if(cont[i]==0){
                //cout<<i<<" ";
                prime[l]=i;
                l++;
            for( int j=i*i;j<=100009;j+=i*2){
                cont[j]=1;
            }
        }
    }
}
int main(){
    scieve();
    int n,ar[100009],br[100009],cr[100009],k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&br[i]);
        if(br[i]==1){
            div1[br[i]]++;
        }
    }
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        scanf("%d",&cr[i]);
    }
    for(int i=1;i<=n;i++){
            int y=sqrt(br[i]);
            int n1=br[i];
        for(int j=1;j<l&&prime[j]<=y;j++){
            if(n1%prime[j]==0){
                div1[prime[j]]++;
                while(n1%prime[j]==0){
                    n1/=prime[j];
                }
            }
        }
        if(n1>1){
            div1[n1]++;
        }
    }
    for(int i=1;i<=k;i++){
        if(div1[cr[i]]>0){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}
