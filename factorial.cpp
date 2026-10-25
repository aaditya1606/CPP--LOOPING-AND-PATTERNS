// PROGRAM: PRINT THE FACTORIAL OF THE GIVEN NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    int product=1;
    for(int i=1;i<=n;i++){
        product*=i;
    }
    cout<<"FACTORIAL OF "<<n<<" IS: "<<product;
    return 0;
}