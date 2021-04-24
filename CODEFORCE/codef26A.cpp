#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,x=0;
    char s[10000];
    scanf("%d",&n);
    getchar();
    scanf("%[^\n]",s);
    int l=strlen(s);
    for(int i=0; i<strlen(s); i++)
    {

        if(s[i]!=' ')
        {  //cout<<1<<" "<<s[i]<<endl;
            if(s[i]>='A'&&s[i]<='Z')
            {
                sum+=1;
                if(x<sum)
                {
                    x=sum;
                }
            }
        }
        else
        {
            //a[l]=x;
            //x=-1;
            sum=0;
        }

    }
    printf("%d",x);
    return 0;
}
