// PROGRAM: FIND THE SUM OF DIGITS OF A NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    int temp = number;
    if (number >= 0)
    {
        int sum = 0;
        if (number == 0)
        {
            cout << "SUM: " << sum;
        }
        else
        {
            while (number > 0)
            {
                int digit = number % 10;
                sum += digit;
                number /= 10;
            }
            cout << "SUM OF DIGITS OF " << temp << " : " << sum;
        }
    }
    else
    {
        cout << "INVALID NUMBER!!";
    }
    return 0;
}