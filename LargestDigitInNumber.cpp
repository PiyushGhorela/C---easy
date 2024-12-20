#include<iostream>
using namespace std;
int main(){
    int n,m=0;
    cout<<"Enter your number: ";
    cin>>n;
    while(n!=0){
        int r = n%10;
        if(r>m){
        m=r;
    }
    n=n/10;
    }
    
    cout<<"Largest digit is: "<<m;
    return 0;
}

// To find Largest digit in a number