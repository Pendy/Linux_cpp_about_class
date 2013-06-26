#include "StudentHead.h"
Student::Student(int y,int m, int d,int num, char *pname):birthday(y,m,d)
{
	code=num;
	strncpy(name, pname, sizeof(name));
	name[sizeof(name)-1]='\0';
}
void Student::SetStudent(int y, int m, int d , int num, char *pname)
{
	code=num;
	strncpy(name, pname, sizeof(name));
	name[sizeof(name)-1]='\0';
	cout<<name<<endl;
}
void Student::PrintStudent()const
{
	cout<<"Code: "<<code<<"\tName: "<<name<<"\tBirthday: ";
	birthday.PrintDate();
	cout<<endl;
}