#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    for(int i=1;i<=n;i++){
        cout<<a<<' ';
        c = a+b;
        a=b;
        b=c;
    }
}