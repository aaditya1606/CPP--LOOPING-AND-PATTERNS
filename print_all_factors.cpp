// PROGRAM: PRINT ALL FACTORS OF A GIVEN NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}