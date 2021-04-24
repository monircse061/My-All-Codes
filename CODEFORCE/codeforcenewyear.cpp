#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[1000];
    int i,j=0,n,len;
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++){
        if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
           j++;
        if((s[i]-48)%2!=0&&(s[i]<97||s[i]>122))
            j++;
    }
    printf("%d",j);
    return 0;
}
