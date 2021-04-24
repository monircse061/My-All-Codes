#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{

    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='n')
        {
            if(i==s.length()-1&&s[i]!='n'&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
            {
                printf("NO");
                return 0;
            }
            else if(s[i+1]!='a'&&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='o'&&s[i+1]!='u')
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}
