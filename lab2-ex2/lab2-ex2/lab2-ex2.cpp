#include "student.h"
#include "cmps.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    float g;
    char s[50];
    student a, b;
    a.init();
    b.init();

    cout << "the name of the first student is:";
    cin.getline(s, 50);
    a.setname(s);
    cout << endl;
    cout << "the history grade of the first student is:";
    cin >> g;
    a.sethis(g);
    cout << endl;
    cout << "the math grade of the first student is:";
    cin >> g;
    a.setmath(g);
    cout << endl;
    cout << "the english grade of the first student is:";
    cin >> g;
    a.seteng(g);
    cout << endl;

    a.setavg();
    cout << endl;

    cout << "the first student's stats:" << endl;
    cout<<"the name of the first student is:"<< a.getname()<<endl;
    cout << "the english grade of the first student is:" << a.geteng() << endl;
    cout << "the math grade of the first student is:" << a.getmath() << endl;
    cout << "the history grade of the first student is:" << a.gethis() << endl;
    cout << "the average grade of the first student is:" << a.getavg() << endl;

    cout << endl;
    cout << endl;

    strcpy_s(s, "\0");
    cin.getline(s, 50);


    cout << "the name of the second student is:";
    cin.getline(s, 50);
    b.setname(s);
    cout << endl;
    cout << "the history grade of the second student is:";
    cin >> g;
    b.sethis(g);
    cout << endl;
    cout << "the math grade of the second student is:";
    cin >> g;
    b.setmath(g);
    cout << endl;
    cout << "the english grade of the second student is:";
    cin >> g;
    b.seteng(g);
    cout << endl;

    b.setavg();
    cout << endl;

    cout << "the second student's stats:" << endl;
    cout << "the name of the second student is:" << b.getname() << endl;
    cout << "the english grade of the second student is:" << b.geteng() << endl;
    cout << "the math grade of the second student is:" << b.getmath() << endl;
    cout << "the history grade of the second student is:" << b.gethis() << endl;
    cout << "the average grade of the second student is:" << b.getavg() << endl;
    cout << endl;

    cout << "overall, the student with the better average grade is:";
    if (compavg(a, b) == -1)
        cout << " the second student!";
    else
        if (compavg(a, b) == 1)
            cout << " the first student!";
        else
            cout << " they both have the same garde o_O?";

    cout << endl;
    cout << endl;

}
