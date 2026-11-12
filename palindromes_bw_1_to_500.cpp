// PROGRAM: PRINT ALL THE NUMBERS THAT ARE PALINDROME BETWEEN 1 AND 500
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1;i<=500;i++){
        int num=i,sum=0;
        while(num>0){
            int digit=num%10;
            sum=sum*10+digit;
            num/=10;
        }
        if(sum==i)cout<<i<<endl;
    }
    return 0;
}