#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,n1,cont=0,m1;
    scanf("%d %d",&n,&m);
    n1=n;m1=m;
    string s;
    cin>>s;
    if(m==2){
        printf("()");
    }
    else if(n==m){
        cout<<s;
    }
    else{
            int i=0,i1,cont1;
        while(m1!=0){
                int cont=0,l=1,l1=1;cont1=0;
          while(s[i]=='('){
                    cont++;
                    i++;
                }i1=i;
           while(s[i1]==')'){
            cont1++;i1++;
           }
           if(cont!=cont1){
            i+=1;
            cont=cont1;
           }
           else{
            i+=cont;
           }
           if((m1/2)<cont){
               cont=m1/2;
           }
          while(l<=cont){
            printf("(");
            l++;
          }
          while(l1<=cont){
            printf(")");
            l1++;
          }

          m1-=cont*2;
        }
    }
    return 0;
}
