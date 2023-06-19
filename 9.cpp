#include<iostream>
#include<string>
using namespace std;
class pntr_obj{
    int rollno;
    string name;
    public:
    void set_data(int r,string n){
        rollno = r;
        name = n;
    }
    void print(){
        cout<<"Data for Object with this pointer "<<this<<":\nRoll no. = "<<rollno<<", Name: "<<name<<endl;
        cout<<endl;
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
    pntr_obj obj1,obj2,obj3;
    obj1.set_data(1,"Rajeev Sharma");
    obj2.set_data(2,"Adarsh Gupta");
    obj3.set_data(3,"Sachin Bhardwaj");
    obj1.print();
    obj2.print();
    obj3.print();
    return 0;
}