// PROGRAM: PRINT STARS AND SPACES ALTERNATING
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
            if (j % 2 == 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        blankspaces--;
        cout << endl;
    }
    return 0;
}