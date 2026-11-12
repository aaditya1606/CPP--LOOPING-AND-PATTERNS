// PROGRAM: PRINT FACTORIAL OF EACH NUMBER UPTO N
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"ENTER N: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int factorial=1;
        for(int j=1;j<=i;j++){
            factorial*=j;
        }
        cout<<factorial<<endl;
    }
    return 0;
}