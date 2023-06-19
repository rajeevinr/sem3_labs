#include<iostream>
using namespace std;
int reverse_number(int n){
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    return rev;
}
void reverse_number2(int &n){
    int rev = 0;
    while(n>0){
        int rem = n%10;
        rev = rev*10 + rem;
        n/=10;
    }
    n = rev;
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
    int rev_num  = reverse_number(num);
    cout<<"Reverse using return type function: "<<rev_num<<endl;
    cout<<"Reverse using without return type function: ";
    reverse_number2(num); // num has change after call this function.
    cout<<num;
    return 0;
}