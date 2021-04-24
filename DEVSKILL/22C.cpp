#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
        int vowel=0,con=0,ans=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                vowel++;
            }
            else if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]>=97&&s[i]<=122)
            {
                con++;
            }

        }
        if(vowel==s.length()||con==s.length()){
            ans=0;
        }
        else if(vowel>con)
        {
            ans=(s.length()-(vowel+con))+con;
        }
        else
        {
            ans=(s.length()-(vowel+con))+vowel;
        }
        printf("%d\n",ans);
    }
    return 0;
}
