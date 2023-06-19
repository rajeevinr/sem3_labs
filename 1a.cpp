#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int units;
    double charge = 0.0;

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


    cout<<"Enter the names of user: ";
    getline(cin,name);
    cout<<"Enter the number of units consumed: ";
    cin>>units;
    if(units<=100)
        charge = units * 0.5;
    else if(units<=300)
        charge = 50 + (units-100) * 0.8;
    else
        charge = 210 + (units-300) * 0.9;

    if (charge<50)
        charge = 50;
    if (charge>300)
        charge += charge * 0.15;
    
    cout<<"Name: "<<name<<endl;
    cout<<"Units consumed: "<<units<<endl;
    cout<<"Charges: Rs. "<<charge<<endl;
    return 0;
}
