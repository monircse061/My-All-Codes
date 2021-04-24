#include<stdio.h>
#include<string.h>
struct cse{
  int id;
  double cgpa;
  char name[100];
};
void input(struct cse s[])
{
    int i=3;
    for(i=0;i<3;i++)
        scanf("%s %d %lf",s[i].name,&s[i].id,&s[i].cgpa);
}
void sort(struct cse s[])
{
    struct cse tem;
    int i,j;
    for(j=0;j<2;j++){
        for(i=j+1;i<3;i++)
        {
            if(s[j].cgpa>s[i].cgpa)
            {
                strcpy(tem.name,s[j].name);
                tem.id=s[j].id;
                tem.cgpa=s[j].cgpa;

                s[j].id=s[i].id;
                strcpy(s[j].name,s[i].name);
                s[j].cgpa=s[i].cgpa;

                s[i].id=tem.id;
                strcpy(s[i].name,tem.name);
                s[i].cgpa=tem.cgpa;

            }


        }
    }
}
void output(struct cse s[])
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("%s %d %lf\n",s[i].name,s[i].id,s[i].cgpa);
    }
}

int main()
{
    struct cse s[3];

    input(s);
    sort(s);
    output(s);
    return 0;
}
