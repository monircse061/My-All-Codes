#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[10000];int i,k,l,d,u,r,x,n,s1,x1,s2,s3,s4;
   while(scanf("%d",&n)!=EOF)
   {

    getchar();
    gets(s);
    l=0;d=0;u=0;r=0;
   for(i=0;i<n;i++){
   if(s[i]=='L')
    {l++;}
   else if(s[i]=='D')
    {d++;}
    else if(s[i]=='U')
        {u++;}
    else
        {r++;}


   }
   s1=u+d;s3=l+r;
   if(u>d)
   {s2=u-d;}
   else
    {s2=d-u;}
   if(l>r)
    {s4=l-r;}
   else
    {s4=r-l;}
    printf("%d\n",(s1-s2)+(s3-s4));
   }
   //printf("%d",(min(l,d)+min(u,r)));
   return 0;
}
