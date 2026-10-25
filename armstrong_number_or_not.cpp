// PROGRAM: CHECK IF A NUMBER IS AN ARMSTRONG NUMBER OR NOT
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
    if (number >= 0)
    {
        int digitscount = 0;
        if (number >= 0 && number <= 9)
        {
            cout << "ARMSTRONG NUMBER!!";
        }
        else
        {
            while (number > 0)
            {
                int digit = number % 10;
                digitscount++;
                number /= 10;
            }
            number = temp;
            float sum = 0;
            while (number > 0)
            {
                int digit = number % 10;
                float numtobeadded=pow(digit,digitscount);
                // int numtobeadded = 1;
                // for (int i = 1; i <= digitscount; i++)
                // {
                //     numtobeadded = numtobeadded * digit;
                // }
                sum+=numtobeadded;
                number /= 10;
            }
            if (sum == temp)
            {
                cout << "ARMSTRONG NUMBER!!";
            }
            else
            {
                cout << "NOT AN ARMSTRONG NUMBER!!";
            }
        }
    }
    else
    {
        cout << "INVALID NUMBER!!";
    }
    return 0;
}