#include<stdio.h>
#include<string.h>
struct Struct{

    int value;
    char name[100];
};
void swap(struct Struct *a,struct Struct *b)
{
    struct Struct tem;
    tem.value=a->value;
    strcpy(tem.name,a->name);
    a->value=b->value;
    strcpy(a->name,b->name);
    b->value=tem.value;
    strcpy(b->name,tem.name);
}
int main()
{
    struct Struct man1,man2;
    printf("enter man1 name and value\n");
    scanf("%d %s",&man1.value,man1.name);
    printf("enter man2 name and value\n");
    scanf("%d %s",&man2.value,man2.name);
    if(man1.value<man2.value)
       swap(&man1,&man2);
        printf("%d %s",man1.value,man1.name);
        printf("%d %s",man2.value,man2.name);
        return 0;
}
