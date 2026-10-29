// PROGRAM: PRINT SUM OF FIRST N TERMS OF FIBONACCI SERIES
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, first_num = 0, second_num = 1;
    cout << "ENTER N: ";
    cin >> n;
    if (n >= 0)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                sum += first_num;
            }
            else if (i == 1)
            {
                sum += second_num;
            }
            else
            {
                int next_num = first_num + second_num;
                sum += next_num;
                first_num = second_num;
                second_num = next_num;
            }
        }
        cout << "SUM OF ALL THE NUMBERS IN THE SERIES: " << sum;
    }
    else
    {
        cout << "INVALID INPUT!!";
    }
    return 0;
}