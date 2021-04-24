#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,m,sum=0,sum1=0,l=0,j=0,t;
    int a[100009],b[100009];
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<m;i++){
        sum+=a[i];
        if(sum1==0)
        {sum1+=b[j];t=sum1;j++;}
        while(sum>t)
        {sum1+=b[j];
         t=sum1;
            j++;}
        if(sum==t){
            sum=0;sum1=0;l++;
        }
    }
    cout<<l;
    return 0;
}
