// PROGRAM: PRINT THE SUM OF ALL ODD NUMBERS UPTO N
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "ENTER THE NUMBER: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }
    cout << "SUM: " << sum;
    return 0;
}