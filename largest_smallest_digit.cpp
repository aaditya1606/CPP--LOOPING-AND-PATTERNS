// PROGRAM: FIND THE SMALLEST AND LARGEST DIGIT IN THE GIVEN NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"ENTER THE NUMBER: ";
    cin>>num;
    int min=9,max=0;
    while(num>0){
        int digit=num%10;
        if(digit<min)min=digit;
        if(digit>max)max=digit;
        num/=10;
    }
    cout<<"MAX DIGIT: "<<max<<endl;
    cout<<"MIN DIGIT: "<<min<<endl;
    return 0;
}