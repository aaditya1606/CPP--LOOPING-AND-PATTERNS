// PROGRAM: CHECK IF A NUMBER IS PRIME OR NOT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    int divisors = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            divisors++;
        }
    }
    if (divisors == 2)
    {
        cout << "PRIME NUMBER!!";
    }
    else
    {
        cout << "NOT A PRIME NUMBER!!";
    }
    return 0;
}