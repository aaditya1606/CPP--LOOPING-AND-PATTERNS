// PROGRAM: PRINT ALL NUMBERS WHOSE SUM OF DIGITS IS EVEN
// LANGUAGE: C++
// AUTHOR- AADITYA SHAKYA

#include <bits/stdc++.h>
using namespace std;

int main(){
        int number,temp;
        cout<<"ENTER THE NUMBER: ";
        cin>>number;
        for(int i=0;i<=number;i++){
                int sum=0;
                temp=i;
                while(temp>0){
                        int digit=temp%10;
                        sum+=digit;
                        temp/=10;
                }
                if(sum%2==0)cout<<i<<endl;
                else{continue;}
        }
        return 0;
}
