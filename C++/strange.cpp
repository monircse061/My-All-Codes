#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1000],l=5,u,n,j,k=0,m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    while(l>=0){

    for( j=0;j<l;j++){
        if(a[j]>a[j+1])
        {u=a[j];k++;
            a[j]=a[j+1];
            a[j+1]=u;
        }

    }
    //n=j-1;
    l=j-1;}
    printf("%d ",k);
    return 0;
}
