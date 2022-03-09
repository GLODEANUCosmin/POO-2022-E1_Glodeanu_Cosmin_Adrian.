#include <iostream>
#include "Math.h"
#include "Math.cpp"
#include <cstring>
#include <cstdarg>

using namespace std;

int main()
{
    
    std::cout << Add(2,3,4)<<endl;
    std::cout << Add(2, 3)<<endl;
    std::cout << Add(5, 3, 4, 5, 6, 7)<<endl;
    std::cout << Mul(2, 3, 4)<<endl;
    std::cout << Add(2.4, 3.2, 4.5)<<endl;

}


