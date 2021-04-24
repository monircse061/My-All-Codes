#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[1000],s1[10000];
    int a,b;
    scanf("%s",s);
    a=strlen(s);
    getchar();
    scanf("%s",s1);
    printf("%c",s[0]);
    for(int i=1; i<a; i++)
    {
        if(s[i]<s1[0])
            printf("%c",s[i]);
        else if(s[i]>=s1[0]){break;}
    }
    printf("%c",s1[0]);
    return 0;
}
