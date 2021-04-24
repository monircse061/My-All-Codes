#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2[10000];
    char s[10000];
    int j,len,t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        j=0,s1="";
        scanf("%s",s);
        len=strlen(s);
        for(int i=0; i<len; i++)
        {
            if(s[i]!='.')
                s1+=s[i];
            if(s[i+1]>='A'&&s[i+1]<='Z')
            {
                s2[j]=s1;
                j++;
                s1="";
            }
            if(s[i]=='.')
            {
                s2[j]=s1;
                break;
            }
        }
        c++;
        printf("Case #%d -> ",c);
        for(int i=0; i<=j; i++)
        {
            cout<<s2[i];
            if(i!=j){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
