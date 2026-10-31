// PROGRAM: PRINT ALL NUMBERS BETWEEN a AND b DIVISIBLE BY 7
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"ENTER a: ";
    cin>>a;
    cout<<"ENTER b: ";
    cin>>b;
    cout<<"NUMBERS BETWEEN a AND b DIVISIBLE BY 7:"<<endl;
    for(int i=a;i<=b;i++){
        if(i%7==0){
            cout<<i<<endl;
        }
    }
    return 0;
}