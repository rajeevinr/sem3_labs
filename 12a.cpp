#include<iostream>
using namespace std;
class myClass{
    private:
    int x;
    public:
    myClass(int a): x(a){}
    friend void display(myClass obj);
    friend class friendClass;
};
class friendClass{
    public:
    void show(myClass obj){
        cout<<"The value of x is "<<obj.x<<endl;
    }
};

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


void display(myClass obj){
    cout<<"The value of x is "<<obj.x<<endl;
}
int main(){
    myClass obj(5);
    display(obj);
    friendClass fc;
    fc.show(obj);
    return 0;
}