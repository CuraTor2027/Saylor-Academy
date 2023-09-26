/*
    Curator2027
    20230926
    PassValueReference.cpp
*/
#include <iostream>
using namespace std;

void foo(const string& s);
void bar(string s);

int main()
{
    const string text = "This is a test.";

    foo(text);  // doesn't make a copy of "text"
    bar(text);  // makes copy of "text"

    return 0;
}

void foo(const string& s)
{
    cout << s << endl;
}

void bar(string s)
{
    cout << s << endl;
}
