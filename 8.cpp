#include<iostream>
using namespace std;
class ObjectCounter{
    private:
    static int objectCount;
    public:
    ObjectCounter(){
        objectCount++;
        cout<<"Object created. Total Objects: "<<objectCount<<endl;
    }
    ~ObjectCounter(){
        objectCount--;
        cout<<"Object destroyed. Total Objects: "<<objectCount<<endl;
    }
};

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


int ObjectCounter::objectCount=0;
int main(){
    {
        ObjectCounter obj1;{
            ObjectCounter obj2;
        }
        ObjectCounter obj3;
    }{
        ObjectCounter obj4;
    }
    return 0;
}