// PROGRAM: PRINT ALPHABETS FROM 'A' IN EVERY ROW
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "ENTER N: ";
    cin >> n;
    char result = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (result > 'Z')
                result = 'A';
            cout << result << " ";
            result++;
        }
        result = 'A';
        cout << endl;
    }
    return 0;
}