// PROGRAM: PRINT THE SUM OF ALL ODD DIGITS AND EVEN DIGITS SEPARATELY IN A NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    int odd_digits_sum=0,even_digits_sum=0;
    cout<<"ENTER THE NUMBER: ";
    cin>>number;
    while(number>0){
        int digit=number%10;
        if(digit%2==0)even_digits_sum+=digit;
        else{odd_digits_sum+=digit;}
        number/=10;
    }
    cout<<"EVEN DIGIT SUM: "<<even_digits_sum<<endl;
    cout<<"ODD DIGIT SUM: "<<odd_digits_sum<<endl; 
    return 0;
}