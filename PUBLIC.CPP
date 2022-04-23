#include<iostream.h>
#include<conio.h>

	 class student
{
	 public:
	 int rollno;
	 char name[20];


	 void display()
	  {
	     cout<<"inside class";
	  }
	};

	void main()
	{
	 student s1;
	 clrscr();

	  cout<<"enter rollno"<<endl;
	  cin>>s1.rollno;
	  cout<<"enter name"<<endl;
	  cin>>s1.name;

	  cout<<"rollno is "<<s1.rollno<<endl;
	  cout<<"name is "<<s1.name<<endl;

	  getch();

}
