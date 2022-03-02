// lab2-ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "NumberList.h"
#include <iostream>

using namespace std;
int main()
{
    //NumberList f;
    NumberList f(3);
    f.Init();

    if (!f.Add(7))
        cout << "nu s-a putut adauga numarul in vector";
    if (!f.Add(17))
        cout << "nu s-a putut adauga numarul in vector";
    f.Add(22);
    f.Add(3);
    f.Sort();
    f.Print();
    return 0;
}

