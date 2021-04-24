#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10],cont=0,n1,num=0,ans=0;
    scanf("%d %d %d %d",&n,&a[0],&a[1],&a[2]);
    sort(a,a+3);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            n1=n-a[0]*i-a[1]*j;
            if(n1>=0&&n1%a[2]==0){
                num=i+j+n1/a[2];
                ans=max(num,ans);
            }
            if(n1<0){
                break;
            }
        }
    }
    printf("%d",ans);
    return 0;
}
