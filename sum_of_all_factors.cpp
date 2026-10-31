// PROGRAM: FIND THE SUM OF ALL FACTORS OF A NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    cout << "SUM OF ALL FACTORS OF " << number << " : " << sum;
    return 0;
}