#include<bits/stdc++.h>
using namespace std;
int main(){
int pos,lift,test,j=0;
scanf("%d",&test);
while(test--){
    scanf("%d%d",&pos,&lift);
    j++;
    if(pos<=lift)
    printf("Case %d: %d\n",j,(lift*4+19));
    else
        printf("Case %d: %d\n",j,(pos-lift)*4+(pos*4)+19);
    }
    return 0;
}
