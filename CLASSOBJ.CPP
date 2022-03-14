//demostrate class and object
#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rollno;
	char name[10];
	void display()
	{
		cout<<"inside class";
	}
};
	void main()
{
	student s;
	cout<<"enter roll no"<<endl;
	cin>>s.rollno;
	cout<<"enter name"<<endl;
	cin>>s.name;
	cout<<"rollno"<<s.rollno<<endl;
	cout<<"name"<<s.name<<endl;
	getch();
}



























