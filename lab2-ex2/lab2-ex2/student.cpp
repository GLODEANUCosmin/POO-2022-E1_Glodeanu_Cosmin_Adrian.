#include "student.h"
#include <iostream>

using namespace std;

void student::init()
{
	math = 0;
	strcpy_s(name,"\0");
	eng = 0;
	his = 0;
}
void student::setname(char *s)
{
	strcpy_s(name, s);
	cout << "the name of the student is: " << name << endl;
	
}
void student::setmath(float a)
{
	math = a;
}
void student::seteng(float a)
{
	eng = a;
}
void student::sethis(float a)
{
	his = a;
}
void student::setavg()
{
	avg = (math + his + eng) / 3;
}
float student::getmath()
{
	return math;
}
float student::gethis()
{
	return his;
}
float student::geteng()
{
	return eng;
}
float student::getavg()
{
	return avg;
}
char* student::getname()
{
	return name;
}


