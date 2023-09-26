/*
    CuraTor2027
    20230926
    VariablesByReference.cpp
*/
#include <iostream>
using namespace std;

void foo(int& i);

int main()
{
    int bar = 5;

    foo(bar);
    
    cout << bar << endl;

    return 0;
}

void foo(int& i)
{
    i++;
}
