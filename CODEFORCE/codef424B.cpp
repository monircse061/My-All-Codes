#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000],s1[10000],s2[10000],s3[10000],s4[10000];
    int l=0,len,l1,l2;
    scanf("%[^\n]",s);
    len=strlen(s);
    getchar();
    scanf("%[^\n]",s1);
    l1=strlen(s1);
    getchar();
    scanf("%[^\n]",s2);
    l2=strlen(s2);
    for(int i=0; i<l2; i++)
    {
        if((s2[i]>='A'&&s2[i]<='Z')||(s2[i]>='a'&&s2[i]<='z'))
        {
            for(int j=0; j<len; j++)
            {
                if((s[j]==s2[i])||(s[j]-32==s2[i]))
                {
                    if(s2[i]>='A'&&s2[i]<='Z')
                    {
                        s4[l]=s1[j]-32;
                        l++;
                        break;
                    }
                    else
                    {
                        s4[l]=s1[j];
                        l++;
                        break;
                    }
                }
            }
        }
        else
        {
            s4[l]=s2[i];
            l++;
        }
    }
    s4[l]='\0';
    printf("%s",s4);
    return 0;
}
