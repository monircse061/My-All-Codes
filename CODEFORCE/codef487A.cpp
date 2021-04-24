#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;int y=0;
    cin>>s;
    int x=s.length();
    for(int i=1; i<s.length()-1; i++)
    {
        if(s[i]=='A'&&((s[i-1]=='B'&&s[i+1]=='C')||(s[i-1]=='C'&&s[i+1]=='B')))
        {
            cout<<"yes"<<endl;y=1;
            break;
        }
        else if(s[i]=='B'&&((s[i-1]=='A'&&s[i+1]=='C')||(s[i-1]=='C'&&s[i+1]=='A')))
        {
            cout<<"yes"<<endl;y=1;
            break;
        }
        else if(s[i]=='C'&&((s[i-1]=='B'&&s[i+1]=='A')||(s[i-1]=='A'&&s[i+1]=='B')))
        {
            cout<<"yes"<<endl;y=1;
            break;
        }
    }
   if(y==0){
    cout<<"no"<<endl;
   }
    return 0;
}
