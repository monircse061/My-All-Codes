#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0;
    string s;
    scanf("%d",&n);
    cin>>s;
    for(int i=0; i<n; )
    {
        i+=j;
        //printf("%c",s[i]);
        if(i>=n)
            break;
        cout<<s[i];
        j++;
    }
    return 0;
}
