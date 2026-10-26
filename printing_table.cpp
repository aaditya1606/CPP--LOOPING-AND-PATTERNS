// PROGRAM: PRINT THE TABLE OF A GIVEN NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "ENTER THE NUMBER: ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}