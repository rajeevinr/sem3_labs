#include<iostream>
using namespace std;
int main(){
    int ballot, spoiltBallots = 0;
    int count[5] = {0,0,0,0,0},t=5;

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


    cout<<"Enter the ballots (1-5)[Enter 0 to end]:\n";
    do {
        cin>>ballot;
        switch(ballot){
            case 1:
                count[0]++;
                break;
            case 2:
                count[1]++;
                break;
            case 3:
                count[2]++;
                break;
            case 4:
                count[3]++;
                break;
            case 5:
                count[4]++;
                break;
            default:
                if (ballot != 0)
                    spoiltBallots++;
        }
    }while(t--);
    for(int i=0;i<5;i++)
        cout<<"votes for candidates"<<i+1<<":"<<count[i]<<endl;
    cout<<"spoilt Ballots: "<<spoiltBallots<<endl;
}