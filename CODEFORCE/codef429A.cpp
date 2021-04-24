#include<bits/stdc++.h>
using namespace std;
int cont[10000];
int main()
{
    string s;
    double n,m;
    scanf("%lf %lf",&n,&m);
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        cont[s[i]]++;
    }
    for(int i=0; i<s.length(); i++)
    {
        if(cont[s[i]]!=0)
        {
            if(cont[s[i]]/m>1)
            {
                printf("NO");
                return 0;
            }
            cont[s[i]]=0;
        }
    }
    printf("YES");
    return 0;
}
