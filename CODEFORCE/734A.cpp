#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,d=0;
    string s;
    scanf("%d",&n);
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a>d){
        printf("Anton");
    }
    else if(a<d){
        printf("Danik");
    }
    else{
        printf("Friendship");
    }
    return 0;
}
