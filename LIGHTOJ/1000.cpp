#include<bits/stdc++.h>
#include<conio.h>
#include<stdlib.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
using namespace std;

int main()
{
    char pass[1000],ch;
    int i=0,j;
    while(1)
    {
        ch=getch();
        if(ch==ENTER||ch==TAB)
        {
            pass[i]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b");
            }
        }
        else
        {
            pass[i]=ch;
            i++;
            printf("* \b");
        }
    }
    printf("\n\nMy Original Password : %s",pass);
}
/**#include<stdio.h>
int main()
{
    int a,b,i,j=0,test,n;
    scanf("%d",&test);
    while(test--)
    {
        j++;
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",j,a+b);
    }
    return 0;
}**/
