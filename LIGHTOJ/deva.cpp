#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;char a[10];
   scanf("%d",&t);

getchar();
   while(t--){

     gets(a);

    if(a[0]=='a'&&a[1]=='c')
        printf("Accepted\n");
    else if(a[0]=='w'&&a[1]=='a')
        printf("Wrong Answer\n");
    else if(a[0]=='r'&&a[1]=='t'&&a[2]=='e')
            printf("Run Time Error\n");
    else if(a[0]=='t'&&a[1]=='l'&&a[2]=='e')
        printf("Time Limit Exceeded\n");
   }
   return 0;
}
