#pragma once
class NumberList
{
private:
	int numbers[10];
	int count;

public:
	NumberList();
	NumberList(int y);
	void Init();
	bool Add(int x);

	void Sort();
	void Print();
};


