// PROGRAM: PRINT FIRST n TERMS OF AN AP
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, d, n;
    cout << "ENTER THE FIRST TERM: ";
    cin >> a;
    cout << "ENTER THE COMMON DIFFERENCE: ";
    cin >> d;
    cout << "ENTER THE NUMBER OF TERMS: ";
    cin >> n;
    int an;
    cout << "AP SERIES: " << endl;
    for (int i = 1; i <= n; i++)
    {
        an = a + (i - 1) * d;
        cout << an << endl;
    }
    return 0;
}