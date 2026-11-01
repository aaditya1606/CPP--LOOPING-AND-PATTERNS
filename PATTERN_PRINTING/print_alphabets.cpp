// PROGRAM: PRINT ALPHABETS IN THE RIGHT TRIANGLE
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char result = 'A';
    int n;
    cout << "ENTER N: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (result > 'Z')
                result = 'A';
            cout << result << " ";
            result++;
        }
        cout << endl;
    }
    return 0;
}