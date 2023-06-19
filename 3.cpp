#include<iostream>
using namespace std;
int count_vowels(char *str){
    int count = 0;
    while(*str){
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' ||
           *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
           count++;
        str++;
    }
    return count;
}

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    cout<<"Number of vowels in the string: "<<count_vowels(str)<<endl;
    return 0;
}