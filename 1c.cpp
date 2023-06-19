#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Half Pyramid\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
            cout<<"*";
        cout<<endl;
    }




/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


    cout<<"Full Pyramid"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++)
            cout<<" ";
        for(int j=0;j<=2*i-1;j++)
            cout<<"*";
        cout<<endl;
    }
}