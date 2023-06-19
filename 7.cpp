#include<iostream>
using namespace std;
void testFunction(){
    int nonStaticVariable = 0;
    static int staticVariable = 0;
    nonStaticVariable++;
    staticVariable++;
    cout<<"Non-Static variable value: "<<nonStaticVariable<<endl;
    cout<<"Static variable value: "<<staticVariable<<endl;
}

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


int main(){
    cout<<"Values of non-static and static variables in testFunction():\n";
    for(int i=0;i<5;i++)
        testFunction();
    cout<<"Values of non-static and static variables outside of the testFunction():\n";
    int nonStaticVariable = 0;
    static int staticVariable = 0;
    for(int i=0;i<5;i++){
        nonStaticVariable++;
        staticVariable++;
        cout<<"Non Static variable values: "<<nonStaticVariable<<endl;
        cout<<"Static Variable values: "<<staticVariable<<endl;
        cout<<endl;
    }
    return 0;
}