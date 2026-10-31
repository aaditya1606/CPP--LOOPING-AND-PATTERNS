// PROGRAM: CHECK IF A NUMBER IS A STRONG NUMBER OR NOT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    int temp = number;
    int sum = 0;
    while (number != 0)
    {
        int digit = number % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }
        sum += factorial;
        number /= 10;
    }
    if (sum == temp)
        cout << "STRONG NUMBER!!";
    else
    {
        cout<<"NOT A STRONG NUMBER!!";
    }
    return 0;
}
