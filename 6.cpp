#include<iostream>
using namespace std;
void swap_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping by call by value: a = "<<a<<" and b = "<<b<<endl;
}
void swap_reference(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping by call by reference: a = "<<a<<" and b = "<<b<<endl;
}

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


int main(){
    int a,b,choice;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter your choice:\n1. Swap by value\n2. Swap by reference\n"<<endl;
    cin>>choice;
    switch (choice){
    case 1:
        swap_value(a,b);
        break;
    case 2:
        swap_reference(a,b);
        break;
    default:
        cout<<"Invalid choice."<<endl;
        break;
    }
    cout<<"After switch case execution: a = "<<a<<" and b = "<<b<<endl;
    return 0;
}