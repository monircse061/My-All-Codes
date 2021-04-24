#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum,b=0,c=0,a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>=0){
            b=b+a[i];
        }
        else{
            c=c+a[i];
        }
    }
    sum=abs(b-c);
    cout<<sum;
    return 0;
}
