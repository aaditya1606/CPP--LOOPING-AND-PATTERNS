// PROGRAM: PRINT ALL THE PRIME NUMBERS BETWEEN 1 AND 100
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int divisors = 0;
    for (int i = 1; i <= 100; i++)
    {
        divisors=0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisors++;
            }
        }
        if (divisors == 2)
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