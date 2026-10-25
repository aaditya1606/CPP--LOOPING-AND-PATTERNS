// PROGRAM: CHECK IF A NUMBER IS A PERFECT NUMBER OR NOT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    if (number >= 1)
    {
        int sum = 0;
        for (int i = 1; i < number; i++)
        {
            if (number % i == 0)
            {
                sum += i;
            }
        }
        if (sum == number)
            cout << "PERFECT NUMBER!";
        else
        {
            cout << "NOT A PERFECT NUMBER!";
        }
    }
    else
    {
        cout << "ENTER A VALID NUMBER!!";
    }
    return 0;
}