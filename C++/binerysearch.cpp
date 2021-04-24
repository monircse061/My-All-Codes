#include<bits/stdc++.h>
using namespace std;
int main(){
    int f=0,l=9,a[10000],i,j,mid,x;
    scanf("%d",&x);
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    while(f<=l){
        mid=(f+l)/2;

        if(a[mid]>x){
           l=mid-1;
        }
        else if(a[mid]==x){
            printf("%d",mid);
            break;
        }
        else if(a[mid]<x){
            f=mid+1;
        }
    }
    return 0;
}
