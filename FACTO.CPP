/* factorial (5 march)*/
#include<iostream.h>
#include<conio.h>
main()
{
int i,fact=1,no;
clrscr();
cout<<"enter the number";
cin>>no;
for(i=1;i<=no;i++)
{
  fact=fact*i;
}
 cout<<"facorial of number is"<<fact;
getch();
}

