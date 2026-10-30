// PROGRAM: PRINT THE SUM OF FIRST N NATURAL NUMBERS
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
        sum += i;
    }
    cout << "SUM: " << sum;
    return 0;
}