#pragma once
class student
{
private:
	char name[50];
	float math;
	float eng;
	float his;
	float avg;
public:
	void init();
	void setname(char *s);
	void setmath(float a);
	void seteng(float a);
	void sethis(float a);
	void setavg();
	char* getname();
	float getmath();
	float geteng();
	float gethis();
	float getavg();

};

