// PROGRAM: PRINT STARS IN EVEN NUMBERS
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "ENTER N: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}