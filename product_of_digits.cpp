// PROGRAM: PRINT THE PRODUCT OF DIGITS OF A GIVEN NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    int product = 1;
    if (number == 0)
    {
        cout << "Product: 0";
    }
    else
    {
        while (number > 0)
        {
            int digit = number % 10;
            product *= digit;
            number /= 10;
        }
        cout << "Product Of Digits: " << product;
    }
    return 0;
}