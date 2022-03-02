#include "NumberList.h"
#include <iostream>
using namespace std;

NumberList::NumberList()
{
	cout << "Apel constructor implicit"<<endl;
	count = 0;
}

NumberList::NumberList(int y)
{
	cout << "Apel constructor explicit "<< y << endl;
	count = 0;
}

void NumberList::Init()
{
	count = 0;
}
bool NumberList::Add(int x)
{
	if (count == 10)
		return false;
	else
	{
		numbers[count] = x;
		count++;
		return true;
	}
}
void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		cout << numbers[i] << " ";
	cout << endl;
}
void NumberList::Sort()
{
	for (int i = 0; i < count; i++)
		for (int j = i + 1; j < count; j++)
			if (numbers[i] > numbers[j])
				swap(numbers[i], numbers[j]);

}