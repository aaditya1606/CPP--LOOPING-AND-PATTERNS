// PROGRAM: FIND HCF(GCD) OF TWO NUMBERS USING LOOPS
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
    int hcf = 1;
    int minimum_num = min(num1, num2);
    for (int i = 2; i <= minimum_num; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF OF " << num1 << " AND " << num2 << " : " << hcf;
    return 0;
}