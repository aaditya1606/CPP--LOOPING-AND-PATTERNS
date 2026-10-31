// PROGRAM: PRINT THE SQUARES OF NUMBERS FROM 1 TO N
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"ENTER N: ";
    cin>>n;
    cout<<"SQUARES OF NUMBERS FROM 1 TO N:"<<endl;
    for(int i=1;i<=n;i++){
        cout<<i*i<<endl;
    }
    return 0;
}
