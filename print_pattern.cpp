// PROGRAM: PRINT A PATTERN WHERE EACH ROW i PRINT i*i
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"ENTER NUMBER OF ROWS: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i*i<<endl;
    }
    return 0;
}
