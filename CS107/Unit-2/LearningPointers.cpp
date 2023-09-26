/*
    CuraTor2027
    20230926
    LearningPointers.cpp
*/
#include <iostream>
using namespace std;

void comparePointers(int* a, int* b);

int main()
{
    int i;
    int j;
    int& r = i;

    comparePointers(&i, &i);
    comparePointers(&i, &j);
    comparePointers(&i, &r);
    comparePointers(&j, &r);

    return 0;
}

void comparePointers(int* a, int* b)
{
    if (a == b)
    {
        cout << "Pointers are the same!" << endl;
    }
    else
    {
        cout << "Pointers are different!" << endl;
    }
}
