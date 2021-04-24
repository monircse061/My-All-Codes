#include<bits/stdc++.h>
using namespace std;
queue<char>q;
int cont[1000000],cont1[100000];
int main()
{
    int n,k,sum;
    scanf("%d %d",&n,&k);
    string s;
    string s1;
    sum=k;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(cont[s[i]]==0)
        {
            if(sum>0)
            {
                cont1[s[i]]=1;
                sum--;
                q.push(s[i]);
            }
        }
        cont[s[i]]++;
    }
    for(int i=1; i<s.length(); i++)
    {
        cont[s[i-1]]--;

        int i1=1,len=q.size();
        if(cont1[s[i]]==0)
        {
            while(i1<=len)
            {
                s1[0]=q.front();
                if(cont[s1[0]]==0)
                {
                    cont1[s[i]]=1;
                    q.pop();
                    q.push(s[i]);
                    break;
                }
                i1++; q.pop();
                q.push(s1[0]);
                s1=" ";
            }
        }
        if(cont1[s[i]]==0)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
