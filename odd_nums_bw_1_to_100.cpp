// PROGRAM: PRINT ALL THE ODD NUMBERS BETWEEN 1 AND 100
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }
    return 0;
}