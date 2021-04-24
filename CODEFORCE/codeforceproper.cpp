#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,i,s,m1;
int main(){
    scanf("%d%d%d",&n,&x,&y);m1=1;
    if(n%x==0){
            m1=0;
            cout<<"YES"<<endl;
        printf("%d 0",n/x);
    }
    else if(n%y==0){
        m1=0;
        cout<<"YES"<<endl;
        printf("0 %d",n/y);
    }
    else{
        for(i=1;i<=n;i++){
           s=n-(x*i);
           m=s%y;
           if(s<=0){break;}
           if(m==0){
             m1=0;
             cout<<"YES"<<endl;
            printf("%d %d",i,(s/y));
            break;
           }
        }
    }
    if(m1==1){cout<<"NO";}
    return 0;
}
