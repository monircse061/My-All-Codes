#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100009],j=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
            j++;
        if(a[i]<j){
           cout<<i+1;
            break;
        }
        if(i==n-1){
            i=-1;
        }
    }
    return 0;
}
