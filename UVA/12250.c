#include<stdio.h>
int main()
{
    char s[10000];int i,j=0;
    while(scanf("%s",s)!=EOF)
    {
    if(s[0]=='#')
        break;
    j++;
    if(s[0]=='H'&&s[1]=='E'&&s[2]=='L'&&s[3]=='L'&&s[4]=='O')
        printf("case %d:ENLISH\n",j);
    else if(s[0]=='H'&&s[1]=='O'&&s[2]=='L'&&s[3]=='A')
        printf("case %d:SPANISH\n",j);
    else if(s[0]=='H'&&s[1]=='A'&&s[2]=='L'&&s[3]=='L'&&s[4]=='O')
        printf("case %d:GERMAN\n",j);
    else if(s[0]=='B'&&s[1]=='O'&&s[2]=='N'&&s[3]=='J'&&s[4]=='O'&&s[5]=='U'&&s[6]=='R')
        printf("case %d:FRENCH\n",j);
    else if(s[0]=='C'&&s[1]=='I'&&s[2]=='A'&&s[3]=='O')
        printf("case %d:ITALIAN\n",j);
    else if(s[0]=='Z'&&s[1]=='D'&&s[2]=='R'&&s[3]=='A'&&s[4]=='V'&&s[5]=='S'&&s[6]=='T'&&s[7]=='V'&&s[8]=='U'&&s[9]=='J'&&s[10]=='T'&&s[11]=='E')
        printf("case %d:RUSSIAN\n",j);
    else
        printf("case %d:UNKNOWN\n",j);}
        return 0;
}
