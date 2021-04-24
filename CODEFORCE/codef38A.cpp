#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[10000];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(i!=0&&(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')){
           if(a[i-1]=='a'||a[i-1]=='e'||a[i-1]=='i'||a[i-1]=='o'||a[i-1]=='u'||a[i-1]=='y'){
            continue;
           }
           }
           cout<<a[i];
    }
    cout<<endl;
    return 0;
}
