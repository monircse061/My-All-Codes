#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    cin >> s;

    int len = s.size()-1,  a;

    for(int i=0; i<=len; i++)
    {
        a=s[i]-97;
        // cout<<90-a<<" ";
        printf("%c ",122-a);
    }

    return 0;
}
