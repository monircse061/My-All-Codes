#include<bits/stdc++.h>
using namespace std;
int cont[1000];
int main()
{
    string s;int n;
    scanf("%d",&n);
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
            if(cont[s[i]]==0)
            {
                cont[s[i]]++;
            }
        }
        else if(cont[s[i]]==0)
        {
            cont[s[i]]++;
        }
    }
    for(int i=97; i<=122; i++)
    {
        if(cont[i]==0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
