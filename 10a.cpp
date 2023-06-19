#include<iostream>
using namespace std;
class Animal{
    protected:
    string name;
    public:
    Animal(string n): name(n){}
    void speak(){
        cout<<name<<" marks a noise."<<endl;
    }
};
class Pet{
    private:
    int age;
    public:
    Pet(int a): age(a){}
    void info(){
        cout<<"Age: "<<age<<endl;
    }
};

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


class Dog: public Animal, public Pet{
    public:
    Dog(string n, int a): Animal(n),Pet(a){}
    void wag(){
        cout<<name<<" wags its tail."<<endl;
    }
};
int main(){
    Dog myDog("Rufus", 3);
    myDog.speak();
    myDog.wag();
    myDog.info();
    return 0;
}