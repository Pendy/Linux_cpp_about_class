#include <iostream>
#include <cstring>
using namespace std;
class Date
{
public:
	Date(int y=2000, int m=1, int d=1);
	void SetDate(int y, int m, int d );
	void PrintDate() const;
private:
	int year,month,day;
};
class Student
{
public:
	Student (int y,int m, int d, int num, char *pname="no name");
	void SetStudent(int y,int m,int d,int num, char *pname);
	void PrintStudent()const;
private:
	int code;
	char name[20];
	Date birthday;
};

