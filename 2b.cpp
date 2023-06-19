#include<iostream>
using namespace std;
union student{
    char name[50];
    int age;
    int year;
    int semester;
    int marks[5];
};

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


int main(){
    student s;
    cout<<"Enter Name: ";
    cin>>s.name;
    cout<<"Enter age: ";
    cin>>s.age;
    cout<<"Enter year of study: ";
    cin>>s.year;
    cout<<"Enter Semester: ";
    cin>>s.semester;
    cout<<"Enter marks for 5 subjects: ";
    for(int i=0;i<5;i++)
        cin>>s.marks[i];
    int totalMarks = 0;
    for(int i=0;i<5;i++)
        totalMarks += s.marks[i];
    float percentage = (totalMarks*100.0)/500;
    char grade;
    if (percentage>=90) grade = 'S';
    else if (percentage>=80 && percentage<90) grade = 'A';
    else if (percentage>=70 && percentage<80) grade = 'B';
    else if (percentage>=60 && percentage<70) grade = 'C';
    else if (percentage>=50 && percentage<60) grade = 'D';
    else grade = 'F';
    cout<<"Name: "<<s.name<<endl;
    cout<<"Age: "<<s.age<<endl;
    cout<<"Year of Study: "<<s.year<<endl;
    cout<<"Semester: "<<s.semester<<endl;
    cout<<"Percentage: "<<percentage<<endl;
    cout<<"Grade: "<<grade;
}