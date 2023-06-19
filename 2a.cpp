#include<iostream>
#include<string>
using namespace std;
struct employee{
    string name;
    int age;
    string designation;
    float salary;
};

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


int main(){
    const int numEmployees = 3;
    employee employees[numEmployees]={
        {"Rajeev Sharma",20,"Software Engineer",120000.0},
        {"Sachin Bhardwaj",19,"Businessman",150000.0},
        {"Abhishek Jaishwal",22,"Landowner",200000.0}
    };
    for(int i=0;i<numEmployees;i++){
        cout<<"Name: "<<employees[i].name<<endl;
        cout<<"Age: "<<employees[i].age<<endl;
        cout<<"Designation: "<<employees[i].designation<<endl;
        cout<<"Salary: "<<employees[i].salary<<endl;
    }
}