#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define val 10000
int main(){
    int i,j,s,s1,sum,n,a[val],b[val],y,p=1,l,k,s2;
    scanf("%d",&n); l=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }s1=a[0];
    for(i=0;i<n;i++){
     s=0;
        for(j=i;j<n;j++){
            s=s+a[j];
            sum=abs(s-(360-s));
            b[l]=sum;
            if((b[0]>=b[l])){b[0]=b[l];}
            if(b[0]==0){p=0;break;}
            l++;
       }if(p==0){break;}
    }
  printf("%d\n",b[0]);
  return 0;
}
