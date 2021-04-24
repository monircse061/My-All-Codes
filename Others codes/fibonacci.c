/*#include<stdio.h>
main()
{
    int i,n,a,b,c;
    scanf("%d",&n);
    a=0;b=1;
    for(i=1;i<=n;i++)
    { printf("%d ",a);
   c=a+b;
   a=b;
   b=c;}
    printf("%d ",c);
   return 0 ;
}*/
//DEVELOPED BY: RAKSHIT POOJARI(BTECH IT 2ND YEAR)//
#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
#include<conio.h>
class digidiary
{
long int phno[10];
int d[2];
int a;
char n[10],m[20];
char add[50],cnt[200];
char email[50];
public:
void in()
{
cout<<"************************************"<<endl;
cout<<"WELCOME TO RAKSHIT DIGITAL DIARY
";
cout<<"************************************"<<endl;
cout<<"SELECT THE OPTION YOU WANT TO SEE
";
cout<<"1.EDIT PHONEBOOK
";
cout<<"2.SEE PHONEBOOK
";
cout<<"3.EDIT ADDRESSBOOK
";
cout<<"4.SEE ADDRESSBOOK
";
cout<<"5.EDIT BIRTHDAYS
";
cout<<"6.SEE BIRTHDAYS
";
cout<<"7.ADD EMAIL ID
";
cout<<"8.SEE EMAIL ID
";
cout<<"9.TO WRITE ONTO THE DIARY
";
cout<<"10.TO SHOW THE CONTENT IN THE DIARY
";
cout<<"11.EXIT"<<endl;
cout<<"************************************"<<endl;
cout<<"ENTER YOUR CHOICE
";
cin>>a;
}
void dis()
{
switch(a)
{
case 1:
{
ofstream phin("phone.txt",ios::out);
for(int i=0;i<2;i++)
{
cout<<"Enter the name you want to enter into the phone book: ";
cin>>n;
phin<<n<<"
";
cout<<"Enter the phone number: ";
cin>>phno[i];
phin<<phno[i]<<"
";
}
phin.close();
break;
}
case 2:
{
cout.width(10);
cout<<"NAME";
cout.width(10);
cout<<"PHONENO."<<endl;
cout<<"**************************************"<<endl;
ifstream phout("phone.txt",ios::in);
for(int j=0;j<10;j++)
{
phout>>n;
cout.width(10);
cout<<n;
phout>>phno[j];
cout.width(10);
cout<<phno[j]<<endl;
}
phout.close();
break;
}
case 3:
{
ofstream addin("address.txt",ios::out);
for(int k=0;k<2;k++)
{
cout<<"Enter the name you want to enter into the phone book: ";
cin>>n;
addin<<n<<"
";
cout<<"Enter the Address: ";
cin>>add;
addin<<add<<"
";
}
addin.close();
break;
}
case 4:
{
cout.width(10);
cout<<"NAME";
cout.width(10);
cout<<"ADDRESS"<<endl;
cout<<"**************************************"<<endl;
ifstream addout("address.txt",ios::in);
for(int l=0;l<10;l++)
{
addout>>n;
cout.width(10);
cout<<n;
addout>>add;
cout.width(10);
cout<<add<<endl;
}
addout.close();
break;
}
case 5:
{
ofstream btdin("birthday.txt",ios::out);
for(int s=0;s<2;s++)
{
cout<<"Enter the name you want to enter into the phone book: ";
cin>>n;
btdin<<n<<"
";
cout<<"Enter the Birthday: ";
cout<<"In day: ";
cin>>d[s];
btdin<<d[s]<<"
";
cout<<"In month: ";
cin>>m;
btdin<<m<<"
";
}
btdin.close();
break;
}
case 6:
{
cout.width(10);
cout<<"NAME";
cout.width(20);
cout<<"BIRTHDAY"<<endl;
cout<<"**************************************"<<endl;
ifstream btdout("birthday.txt",ios::in);
for(int t=0;t<10;t++)
{
btdout>>n;
cout.width(10);
cout<<n;
btdout>>d[t]>>m;
cout.width(10);
cout<<d[t]<<"	"<<m<<endl;
}
btdout.close();
break;
}
case 7:
{
ofstream emlin("email.txt",ios::app);
for(int u=0;u<2;u++)
{
cout<<"Enter the name you want to enter into the phone book: ";
cin>>n;
emlin<<n<<"
";
cout<<"Enter the Address: ";
cin>>email;
emlin<<email<<"
";
}
emlin.close();
break;
}
case 8:
{
cout.width(10);
cout<<"NAME";
cout.width(50);
cout<<"EMAIL ID"<<endl;
cout<<"**************************************"<<endl;
ifstream emlout("email.txt",ios::in);
for(int v=0;v<10;v++)
{
emlout>>n;
cout.width(10);
cout<<n;
emlout>>email;
cout.width(50);
cout<<email<<endl;
}
emlout.close();
break;
}
case 9:
{
ofstream outfile;
outfile.open("Diary.txt",ios::out);
cout<<"Enter the content."<<endl;
cout<<"**************************************"<<endl;
cin>>cnt;
outfile<<cnt<<"
";
outfile.close();
break;
}
case 10:
{
ifstream infile;
infile.open("Diary.txt",ios::in);
cout<<"Your  diary's content."<<endl;
cout<<"**************************************"<<endl;
infile>>cnt;
cout<<cnt<<endl;
infile.close();
break;
}
case 11:
{
exit (0);
}
}
}
};
int main()
{
digidiary d;
clrscr();
d.in();
cout<<"*************************************"<<endl;
d.dis();
cout<<"*************************************"<<endl;
d.in();
cout<<"*************************************"<<endl;
d.dis();
getch();
}


