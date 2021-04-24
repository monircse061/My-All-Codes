#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    int i=0,len,x=1,cont=0,j;
    scanf("%s",s);
    len=strlen(s);
    j=len-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            x=0;
            break;
        }
        i++;
        j--;
    }
    if(len==1){
        printf("0");
    }
    else if(x==0)
    {
        printf("%d",len);
    }
    else if(x==1)
    {
        int i,j,y;
        len-=2;
        while(len>=0)
        {
            i=0,j=len;
            y=1;
            while(i<j)
            {
                if(s[i]!=s[j])
                {
                    y=0;
                    break;
                }
                i++;
                j--;
            }
            if(y==0)
            {
                printf("%d",len+1);
                break;
            }
            len--;
        }
        if(y==1)
        {
            printf("0");
        }
    }
    return 0;
}
