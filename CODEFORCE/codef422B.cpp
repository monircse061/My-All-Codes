#include<bits/stdc++.h>
using namespace std;
char s[100009],t[100009];
int main()
{
    int n,m,l,h,x=1000000,c,cont,l1,h1,y=0;
    scanf("%d %d",&n,&m);
    scanf("%s",s);
    getchar();
    scanf("%s",t);
    for(int i=0; i<=m-n; i++)
    {
        c=i;
        cont=0;
        l=i;
        for(int j=0; j<n; j++)
        {
            if(c>=n)
            {
                // break;
            }

            if(s[j]!=t[c])
            {
                cont++;
            }
            c++;
        }
        h=c-1;
        if(x>cont)
        {
            x=cont;
            y=1;
            l1=l;
            h1=h;
        }
    }
    if(y==1)
    {
        printf("%d\n",x);
    }
    else
    {
        printf("0\n");
    }
    for(int i=l1,i1=0; i<=h1; i++,i1++)
    {
        if(s[i1]!=t[i])
        {
            printf("%d ",i1+1);
        }
    }
    return 0;
}
