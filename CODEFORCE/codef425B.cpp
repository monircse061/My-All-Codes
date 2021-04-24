#include<bits/stdc++.h>
using namespace std;
int cont[100009];
int main()
{
    string s,s1,s2[100009],s3;char s4[100009];
    int n,x;
    cin>>s;
    cin>>s1;
    scanf("%d",&n);
    getchar();
    for(int i=0; i<s.length(); i++)
    {
        cont[s[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        scanf("%[^\n]",s4);
        s2[i]=s4;
        //s4="";
        getchar();
    }
    //cout<<s2[0].length();
    for(int i=0; i<n; i++)
    {
        x=0;
        s3=s2[i];
        //cout<<s2[i].length()<<endl;
        //if()
        int j,len=s1.length();
        //cout<<len;
        for( j=0; j<s1.length(); j++)
        {  //cout<<j<<" ";//
            if(s1[j]==s3[j]||(j==len-1&&s1[len-1]=='*'&&s1.length()==s3.length()+1))
            {
                continue;
            }
            else if(s1[j]=='?')
            {
                if(cont[s3[j]]!=0)
                {
                    continue;
                }
                else
                {
                    printf("NO\n");
                    x=1;
                    break;
                }
            }
            else if(s1[j]=='*')
            {
                if(cont[s3[j]]==0)
                {
                    continue;
                }
                else
                {
                    printf("NO\n");
                    x=1;
                    break;
                }
            }
            else if(s1[j]!=s3[j])
            {
                printf("NO\n");
                x=1;
                break;
            }
        }
        if(x==0&&s3.length()<=s1.length())
        {
            printf("YES\n");
        }
        else if(x==0)
        {
            printf("NO\n");
        }
        s3="";
    }
    return 0;
}
