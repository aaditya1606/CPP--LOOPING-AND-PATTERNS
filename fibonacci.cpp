// PROGRAM: PRINT FIBONACCI SERIES UPTO N TERMS
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int first_num = 0, second_num = 1;
    int n;
    cout << "ENTER N: ";
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        if (i == 0)
        {
            cout << first_num << endl;
        }
        else if (i == 1)
        {
            cout << second_num << endl;
        }
        else
        {
            int next_num = first_num + second_num;
            cout << next_num << endl;
            first_num = second_num;
            second_num = next_num;
        }
    }
    return 0;
}