#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
  char s[100000],s1[1000];int n,i,x,p,y,t;
  scanf("%d",&t);
  while(t--)
  {   x=0;
      scanf("%s",s);
  y=strlen(s);
  for(i=0;i<y;i++)

        {x+=pow((s[i]-'0'),y);}
        if(atoi(s)==x)
        printf("Armstrong\n");
        else
            printf("Not Armstrong\n");

        }
        return 0;
}
