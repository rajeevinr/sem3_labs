#include<iostream>
#include<string>
using namespace std;
class Company{
    private:
    string name;
    int employees;
    float revenue;
    public:
    Company(){}
    Company(string n,int e,float r): name(n),employees(e),revenue(r){}
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Number of employees: "<<employees<<endl;
        cout<<"Revenue: "<<revenue<<endl;
    }
    Company operator+(const Company &c){
        Company company;
        company.name = name + " & " + c.name;
        company.employees = employees + c.employees;
        company.revenue = revenue + c.revenue;
        return company;
    }
    Company operator-(const Company &c){
        Company company;
        company.name = name + " - " + c.name;
        company.employees = employees - c.employees;
        company.revenue = revenue - c.revenue;
        return company;
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
    Company company1("CoachingWood", 5, 10000.0);
    Company company2("IN Media", 2, 20000.0);
    Company company3 = company1 + company2;
    Company company4 = company1 - company2;
    cout<<"Adding two objects: ";
    company3.display();
    cout<<"\nSubstracting two objects: ";
    company4.display();
    return 0;
}