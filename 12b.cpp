#include<iostream>
#include<string>
using namespace std;
class Student;
class AverageCalculator{
    public:
    static float mark_avg(Student s);
};
class Student{
    private:
    string name;
    int mark1,mark2,mark3;
    public:
    void get_data(){
        cout<<"Enter the name of the Student: ";
        getline(cin,name);
        cout<<"Enter Mark1: ";
        cin>>mark1;
        cout<<"Enter Mark2: ";
        cin>>mark2;
        cout<<"Enter Mark3: ";
        cin>>mark3;
        cin.ignore(); // Ignore newline character.
    }
    void display(){
        float avg = AverageCalculator::mark_avg(*this);
        cout<<"Name: "<<name<<endl;
        cout<<"Average: "<<avg<<endl;
    }
    friend class AverageCalculor;
};
float AverageCalculator::mark_avg(Student s){
    return (s.mark1+s.mark2+s.mark3)/3.0;
}

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


int main(){
    Student s;
    s.get_data();
    s.display();
    return 0;
}