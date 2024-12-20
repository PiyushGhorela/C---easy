#include<iostream>
using namespace std;
int main(){
    int n,m=0;
    cout<<"Enter  your number :";
    cin>>n;
    while(n!=0){
    int r = n%10;
    m = m*10 + r;
    n=n/10;
    }
    cout<<m;
    return 0;
}

// To reverse a Number