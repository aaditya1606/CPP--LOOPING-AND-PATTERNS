// PROGRAM: PRINT BINARY TRIANGLE
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "ENTER N: ";
    cin >> n;
    int zero = 0, result = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << result << " ";
            swap(result, zero);
        }
        cout << endl;
    }
    return 0;
}