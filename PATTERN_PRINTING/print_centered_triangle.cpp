// PROGRAM: PRINT A CENTERED PYRAMID OF STARS
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "ENTER N: ";
    cin >> n;
    int blankspaces = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = blankspaces; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        blankspaces--;
        cout << endl;
    }
    return 0;
}