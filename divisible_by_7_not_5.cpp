//PROGRAM: COUNT HOW MANY NUMBERS BETWEEN 1-500 ARE DIVISIBLE BY 7 BUT NOT BY 5
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    for(int i=1;i<=500;i++){
        if(i%7==0 && i%5!=0){
            count++;
        }
    }
    cout<<"COUNT OF NUMBERS: "<<count;
    return 0;
}