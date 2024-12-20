#include<iostream>
using namespace std;
int main(){
    int n, m=0,Real;
    cout<<"Enter  your number :";
    cin>>n;
    Real=n;
    while(n!=0){
    int r = n%10;
    m = m*10 + r;
    n=n/10;
    }
    if(Real==m){
        cout<<"Palindrome";
    }
    else{
    cout<<"Not Palindrome";
    }
    return 0;
}

// To fing Number is Palindrome or Not.