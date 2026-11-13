// PROGRAM: TAKE 5 NUMBERS AS INPUT. IF THE USER ENTERS 0, SKIP IT USING CONTINUE. AT THE END, PRINT THE SUM OF ALL NON ZERO NUMBERS ENTERRED
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    for(int i=1;i<=5;i++){
        int number;
        cout<<"ENTER THE NUMBER: ";
        cin>>number;
        if(number==0)continue;
        else{
            sum+=number;
        }
    }
    cout<<"SUM OF ALL NON ZERO NUMBERS: "<<sum<<endl;
    return 0;
}