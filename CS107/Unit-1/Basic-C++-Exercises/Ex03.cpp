/*
    CuraTor2027
    20230922
    Ex03.cpp
*/
#include <iostream>
using namespace std;

int main()
{
    string dataTypes[] = {"char", "short", "int", "long", "long long", "float", "double", "long double", "bool"};
    int dataTypesSize[] = {sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long), sizeof(float), sizeof(double), sizeof(long double), sizeof(bool)};

    cout << "Find size of fundamental data types:" << endl;
    cout << "----------------------------------------------" << endl;

    for (int i = 0; i < (sizeof(dataTypes) / sizeof(string)); i++)
    {
        cout << "The sizeof(" << dataTypes[i] << ") is: " << dataTypesSize[i] << " bytes" << endl;
    }

    return 0;
}
