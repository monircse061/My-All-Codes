#include<bits/stdc++.h>
using namespace std;
int cont[10000],cont1[10000];
int main()
{
    string s,s1,s2,s3;
    cin>>s>>s1>>s2;
    s3=s+s1;
    //cout<<s3<<endl;
    for(int i=0; i<s3.length(); i++)
    {
        cont[s3[i]]++;
    }
    for(int i=0; i<s2.length(); i++)
    {
        cont1[s2[i]]++;
    }
    for(int i=0; i<s2.length(); i++)
    {
        if(cont[s2[i]]!=cont1[s2[i]])
        {
            printf("NO");
            return 0;
        }
    }
    for(int i=0; i<s3.length(); i++)
    {
        if(cont[s3[i]]!=cont1[s3[i]])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
