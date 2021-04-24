#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans_string="";
    int k,sum=0,sub=0,letter=0,unletter=0;
    cin>>s;
    scanf("%d",&k);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            letter++;
        }
        else
        {
            unletter++;
        }
    }
    if(letter>k)
    {
        sub=letter-k;
    }
    if(letter<k)
    {
        sum=k-letter;
    }
    for(int i=0; i<s.length(); i++)
    {
        if((i+1)<s.length())
        {
            if(sub>0&&(s[i+1]<97||s[i+1]>122)&&(s[i]>=97&&s[i]<=122))
            {
                sub--;
                i++;
                continue;
            }
        }
        if(sum>0&&s[i]=='*'&&(s[i-1]>=97&&s[i]<=122))
        {
            while(sum>0){
                ans_string+=s[i-1];
                sum--;
            }
            continue;
        }
        if(s[i]>=97&&s[i]<=122)
            ans_string+=s[i];
    }
    if(ans_string.size()==k)
    {
        cout<<ans_string;
    }
    else
    {
        printf("Impossible");
    }
    //main();
    return 0;
}
