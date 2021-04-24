#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string s[10009],s1;
    ll n,a[10009],x=INT_MAX,y=INT_MAX,z=INT_MAX,x1=INT_MAX,y1=INT_MAX,
    z1=INT_MAX,ck[10009],l=0;

    scanf("%I64d",&n);
    for(int i=1;i<=n;i++){
        scanf("%I64d",&a[i]);
        cin>>s[i];
        s1=s[i];
        if(x>a[i]&&s1[0]=='A'){
           x=a[i];
        }
        else if(y>a[i]&&s1[0]=='B'){
            y=a[i];
        }
        else if(z>a[i]&&s1[0]=='C'){
            z=a[i];
        }
        else if(s[i].length()==2){
            if(s[i]=="AB"||s[i]=="BA"){
              if(x1>a[i]){
                x1=a[i];
              }
              else if(s[i]=="BC"||s[i]=="CB"){
                if(y1>a[i]){
                    y1=a[i];
                }
              }
              else{
                if(z1>a[i]){
                    z1=a[i];
                }
              }
        }
    }}
    for(int i=1;i<=n;i++){
        if(s[i].length()==3){
                l++;
            ck[l]=a[i];
        }
        else if(s[i].length()==2){
            if(s[i]=="AB"||s[i]=="BA"){
                if(z!=INT_MAX){
                    l++;
                    ck[l]=a[i]+z;
                }
                else if(x1!=INT_MAX){
                    l++;
                    ck[l]=a[i]+x1;
                }

            }
            else if(s[i]=="BC"||s[i]=="CB"){
                if(x!=INT_MAX){
                    l++;
                    ck[l]=a[i]+x;
                }
                else if(y1!=INT_MAX){
                    l++;
                    ck[l]=a[i]+y1;
                }
            }
            else if(s[i]=="AC"||s[i]=="CA"){
                if(y!=INT_MAX){
                    l++;
                    ck[l]=a[i]+y;
                }
                else if(z1!=INT_MAX){
                    l++;
                    ck[l]=a[i]+z1;
                }
            }
        }
    }
    if(x!=INT_MAX&&y!=INT_MAX&&z!=INT_MAX){
        l++;
        ck[l]=x+y+z;
    }
    if(l!=0)
    {sort(ck+1,ck+l+1);}
    if(ck[1]==0){
        printf("-1");
    }
    else{
        printf("%I64d",ck[1]);
    }
    return 0;
}
