/*
    CuraTor2027
    20230926
    SwapIntegersReference.cpp
*/
#include <iostream>
using namespace std;

void swap(int& a, int& b);

int main()
{
    int i = 7;
    int j = 9;

    cout << "i: " << i << endl;
    cout << "j: " << j << endl;

    swap(i, j);

    cout << "\ni: " << i << endl;
    cout << "j: " << j << endl;

    return 0;
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
