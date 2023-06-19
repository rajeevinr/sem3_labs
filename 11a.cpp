#include<iostream>
using namespace std;
class Bank{
    private:
    int count = 0;
    public:
    Bank(){}
    void operator++(){
        count++;
    }
    void operator--(){
        count--;
    }
    void display(){
        cout<<"Number of person inside the bank: "<<count<<endl;
    }
};

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


int main(){
    Bank bank;
    ++bank;
    ++bank;
    bank.display();
    --bank;
    bank.display();
    return 0;
}