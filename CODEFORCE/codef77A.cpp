#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cont=0,x=0;
    int len=s.length();
    for(int i=0; i<s.length(); i++)
    {
        cont=0;
        if(s[i]=='0')
        {
            while(1)
            {
                if(s[i]=='1')
                {
                    i--;
                    break;
                }
                else if(i==len-1)
                {
                    if(s[i]=='0')
                    {
                        cont++;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                i++;
                cont++;
            }
            if(cont>=7)
            {
                x++;
            }
        }
        else
        {
            while(1)
            {
                if(s[i]=='0')
                {
                    i--;
                    break;
                }
                else if(i==len-1)
                {
                    if(s[i]=='1')
                    {
                        cont++;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                i++;
                cont++;
            }
            if(cont>=7)
            {
                x++;
            }

        }
        if(x>0)
            break;
    }
    if(x>0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
