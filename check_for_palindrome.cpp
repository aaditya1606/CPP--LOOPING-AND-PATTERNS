// PROGRAM: CHECK IF A NUMBER IS A PALINDROME OR NOT
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
        if (number >= 0 && number <= 9)
        {
            cout << "PALINDROME!!";
        }
        else
        {
            int sum = 0;
            while (number > 0)
            {
                int digit = number % 10;
                sum = sum * 10 + digit;
                number /= 10;
            }
            if (temp == sum)
            {
                cout << "PALINDROME!!";
            }
            else
            {
                cout << "NOT PALINDROME!!";
            }
        }
    }
    else
    {
        cout << "INVALID NUMBER!!";
    }
    return 0;
}