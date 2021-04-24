#include<bits/stdc++.h>
using namespace std;
map<char,int>m;
int a[10],x=0;
int main()
{
    char s[1009];
    scanf("%s",s);
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='h'&&m[s[i]]<1&&x==0)
        {
            m[s[i]]++;
            a[1]++;x++;
            //cout<<s[i];
        }
        else if(s[i]=='e'&&m[s[i]]<1&&x==1)
        {
            m[s[i]]++;x++;
            a[2]++;//cout<<s[i];
        }
        else if(s[i]=='o'&&m[s[i]]<1&&x==4)
        {
            m[s[i]]++;x++;
            a[3]++;//cout<<s[i];
        }
        else if(s[i]=='l'&&m[s[i]]<2&&(x==2||x==3))
        {
            m[s[i]]++;x++;
            a[4]++;//cout<<s[i];
        }
    }
    if(a[1]==1&&a[2]==1&&a[3]==1&&a[4]==2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
