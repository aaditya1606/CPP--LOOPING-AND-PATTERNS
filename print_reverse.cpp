// PROGRAM: PRINT REVERSE OF A GIVEN NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    if (number >= 0)
    {
        if (number >= 0 && number <= 9)
        {
            cout << "REVERSE OF " << number << " : " << number;
        }
        else
        {
            int temp = number, sum = 0;
            while (number > 0)
            {
                int digit = number % 10;
                sum = sum * 10 + digit;
                number /= 10;
            }
            cout << "REVERSE OF " << temp << " : " << sum;
        }
    }
    else
    {
        cout << "INVALID NUMBER!!";
    }
    return 0;
}