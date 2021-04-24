#include<stdio.h>
#include<string.h>
#define val 1000
int main()
{
    char a[val];
    int i,j,m,n,ln,c;
    scanf("%d",&n);
    m=0;
    getchar();
    while(n>0)
    {

        gets(a);
        j=0;
        for(i=0;a[i];i++)
        {
            if(a[i]=='a'||a[i]=='d'||a[i]=='g'||a[i]=='j'||a[i]=='m'||a[i]=='p'||a[i]=='t'||a[i]=='w'||a[i]==' ')
            {
                j++;
            }
            else if(a[i]=='b'||a[i]=='e'||a[i]=='h'||a[i]=='k'||a[i]=='n'||a[i]=='q'||a[i]=='u'||a[i]=='x')
            {
                j+=2;
            }
            else if(a[i]=='c'||a[i]=='f'||a[i]=='i'||a[i]=='l'||a[i]=='o'||a[i]=='r'||a[i]=='v'||a[i]=='y')
            {
                j+=3;
            }
            else if(a[i]=='s'||a[i]=='z')
            {
                j+=4;
            }
        }
        m++;
        printf("Case #%d: %d\n",m,j);
        n--;
    }
    return 0;
}
