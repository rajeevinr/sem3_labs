#include<iostream>
using namespace std;
inline int add(int a,int b){
    return a+b;
}
inline int sub(int a,int b){
    return a-b;
}
inline int mul(int a,int b){
    return a*b;
}

inline int division(int a,int b){
    if (b==0){
        cout<<"Error: division by zero"<<endl;
        return 0;
    }
    return a/b;
}
inline int mod(int a,int b){
    if (b==0){
        cout<<"Error: division by zero"<<endl;
        return 0;
    }
    return a%b;
}

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Addition: "<<add(a,b)<<endl;
    cout<<"Substraction: "<<sub(a,b)<<endl;
    cout<<"Multiplication: "<<mul(a,b)<<endl;
    cout<<"Division: "<<division(a,b)<<endl;
    cout<<"Modulus: "<<mod(a,b)<<endl;
}