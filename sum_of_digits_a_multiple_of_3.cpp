// PROGRAM: PRINT NUMBERS BETWEEN 1-100 WHOSE DIGITS ADD UPTO A MULTIPLE OF 3
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<=100;i++){
        int sum=0,num=i;
        while(num>0){
            int digit=num%10;
            sum+=digit;
            num/=10;
        }
        if(sum%3==0)cout<<i<<endl;
    }
    return 0;
}