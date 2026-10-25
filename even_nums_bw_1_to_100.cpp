// PROGRAM: PRINT ALL THE EVEN NUMBERS BETWEEN 1 AND 100
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        else
        {
            continue;
        }
    }
    return 0;
}