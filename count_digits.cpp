// PROGRAM: COUNT THE NUMBER OF DIGITS IN A GIVEN NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    int count = 0;
    if (number >= 0)
    {
        if (number == 0)
        {
            cout << "NUMBER OF DIGITS: 1";
        }
        else
        {

            while (number > 0)
            {
                int digit = number % 10;
                count++;
                number = number / 10;
            }
            cout << "NUMBER OF DIGITS: " << count;
        }
    }
    else
    {
        cout << "ENTER A POSITIVE NUMBER";
    }
    return 0;
}