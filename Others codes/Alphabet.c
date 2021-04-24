#include<stdio.h>
#include<string.h>
#define val 900000
int main()
{
    char s[val];
    int i,j=0,k=0,ln,m,t,a,l;
        gets(s);
        ln=strlen(s);
        for(i=0; i<ln; i++)
        {

            while(s[i]>='a'&&s[i]<='z'&&i<ln)
            {
                j++;
                while(s[i]>='a'&&s[i]<='z'&&i<ln)
                {
                i++;
                }
            }
            k++;
        }
        if(k==0||j==1)
            {printf("1\n");}
        else
            {printf("%d\n",k);}
             //k=0;j=0;
    //}
    return 0;
}
