#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,cont;
    string s[100],s1[100];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>s1[i];
    }
     int i=0;
    while(i<n)
    {

        for( i=0; i<n; i++)
        {
            int x=1;
            for(int j=0; j<n; j++)
            {
                if(s[i]==s1[j])
                {
                    s[i]="";
                    s1[j]="";
                    x=0;
                }
            }
            if(x==1)
            {
                string s3=s[i],s4;
                int len=s3.length();
                for(int i1=0; i1<n; i1++)
                {
                    s4=s1[i1];
                    int x=1000000;cont=0;
                    int len1=s4. length();
                    if(len==len1)
                    {
                        for(int i=0; i<s4.length(); i++)
                        {
                            if(s3[i]!=s4[i])
                            {
                                cont++;
                            }
                        }
                        if(x>cont)
                        {
                            x=cont;
                        }
                    }
                }
                sum+=x;
                s3="";s4="";
            }
        }
    }
     cout<<sum;
 return 0;
}
