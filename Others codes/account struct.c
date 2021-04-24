#include<stdio.h>
#include<string.h>
#include<conio.h>
struct birthday
    {
        int date;
        int year;

    };
    struct Sex
    {
        int  male;
        int female;
    };
struct student{
  char fist_name[100];
    char last_name[100];
    struct birthday birth;
    struct Sex sex;
};
struct teacher{
char fist_name[100];
    char last_name[100];
    struct birthday birth;
    struct Sex sex;
    int salary;
};

int main()
{
    struct teacher user;
    char sexck[100];
    printf("fist_name:");
    scanf("%s",user.fist_name);
    printf("last_name:");
    scanf("%s",user.last_name);
    printf("\nenter birthday:\n");
    printf("date\n");
    scanf("%d",&user.birth.date);
    printf("year:");
    scanf("%d",&user.birth.year);
    printf("salary:");
    scanf("%d",&user.salary);
    printf("if male press m else press f:");
    scanf("%s",sexck);
    if(strcmp(sexck,"m")==0||strcmp(sexck,"M")==0)
    {
        user.sex.male=1;
        user.sex.female=0;
    }
    else if(strcmp(sexck,"f")==0||strcmp(sexck,"F")==0)
    {
        user.sex.female=1;
        user.sex.male=0;
    }
    else
    {
        printf("wrong");
        return 0;
    }
    printf("%s\n",user.fist_name);
    printf("%s\n",user.last_name);
    printf("%d\n",user.birth.date);
    printf("%d\n",user.birth.year);
    printf("salary:%d\n",user.salary);
    if(user.sex.male==1)
        printf("male\n");
    else
        printf("female\n");
    return 0;
}

