/*
    CuraTor2027
    20230926
    PassingArray.cpp
*/
#include <iostream>
using namespace std;

void printArray(int* arrayArg, int arrayLength);

int main()
{
    int myArray[5];

    for (int i = 0; i < 5; i++)
    {
        myArray[i] = i * 2;
    }

    printArray(myArray, 5);

    return 0;
}

void printArray(int* arrayArg, int arrayLength)
{
    cout << "The length of the array is: " << arrayLength << endl;
    
    for (int i = 0; i < arrayLength; i++)
    {
        cout << "Array[" << i << "] = " << arrayArg[i] << endl;
    }
}
