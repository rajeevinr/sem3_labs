#include<iostream>
using namespace std;
int factorial(int n){
    if (n==0) return 1;
    return n*factorial(n-1);
}
int  sum_of_factorials(int n){
    if (n==0) return 1;
    return factorial(n) + sum_of_factorials(n-1);
}

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum = sum_of_factorials(num);
    cout<<"Sum of factorial of "<<num<<" is "<<sum<<endl;
    return 0;
}