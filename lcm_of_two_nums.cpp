// PROGRAM: FIND LCM OF TWO NUMBERS USING LOOPS
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cout << "ENTER THE FIRST NUMBER: ";
    cin >> num1;
    cout << "ENTER THE SECOND NUMBER: ";
    cin >> num2;
    int i = max(num1, num2);
    while (true)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            break;
        }
        else
        {
            i++;
        }
    }
    cout << "LCM OF " << num1 << " AND " << num2 << " : " << i;
    return 0;
}