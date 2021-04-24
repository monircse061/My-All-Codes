#include<bits/stdc++.h>
using namespace std;
 char x,a[1000][1000];int r,c,m,n,co,p,q,r1,s,v[1000];
void fun(int m,int n){

             if(m+1<r&&a[m+1][n]=='.')
                   {a[m+1][n]='a';co++;fun(m+1,n);}
                if(m-1>=0&&a[m-1][n]=='.')
                    {a[m-1][n]='a';co++; fun(m-1,n);}
                if(n+1<c&&a[m][n+1]=='.')
                    {a[m][n+1]='a';co++;fun(m,n+1);}
                if(n-1>=0&&a[m][n-1]=='.')
                   {a[m][n-1]='a';co++; fun(m,n-1);}

    }
int main(){
    int t,num=0;
    scanf("%d",&t);
    while(t--){co=0;
    scanf("%d %d",&c,&r);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>x;
            a[i][j]=x;
            if(a[i][j]=='@'){
                m=i;n=j;a[i][j]='a';
            }
        }
    }

    fun(m,n);num++;
printf("Case %d: %d\n",num,co+1);
    }
    return 0;
}
