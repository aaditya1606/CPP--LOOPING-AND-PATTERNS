// PROGRAM: PRINT INCREMENTING NUMBERS(SINGLE DIGITS ONLY)
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "ENTER N: ";
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (count > 9)
                count = 0;
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}