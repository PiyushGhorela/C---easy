#include<iostream>
using namespace std;
int main(){
    long n;
    int count=0;
    cout<< "Enter the Number: ";
    cin>>n;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout << count;
}

// Count Digits In Numbers.