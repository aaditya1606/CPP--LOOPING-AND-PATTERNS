// PROGRAM: PRINT FIRST n TERMS OF A GP
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, r, n;
    cout << "ENTER THE FIRST TERM: ";
    cin >> a;
    cout << "ENTER COMMON RATIO: ";
    cin >> r;
    cout << "ENTER THE NUMBER OF TERMS: ";
    cin >> n;
    int an;
    cout << "GP SERIES:" << endl;
    for (int i = 1; i <= n; i++)
    {
        an = a * pow(r,i - 1);
        cout << an << endl;
    }
    return 0;
}