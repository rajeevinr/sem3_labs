#include<iostream>
#define SIZE 5
template <class T>
class Stack{
    private:
    T arr[SIZE];
    int top;
    public:
    Stack(){
        top = -1;
    }
    void push();
    void pop();
    void show();
};

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


template<class T>
void Stack<T>::push(){
    if(top == SIZE-1)
        cout<<"Stack is Full";
    else{
        top++;
        cout<<"Input the data in the Stack";
        cin>>arr[top];
    }
}
template<class T>
void Stack<T>::pop(){
    if (topp==-1)
        cout<<"Stack is Empty";
    else{
        cout<<"Popped item: "<< arr[top];
        top--;
    }
}
template<class T>
void Stack<T>:: show(){
    for(int i=0;i<top;i++)
        cout<<arr[i]<<endl;
}
int menu(){
    int choice;
    cout<<"\nMenu:\n1. PUSH\n2. POP\n3. SHOW\n4. EXIT\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    return choice;
}
void main(){
    Stack<int> s;
    while(1){
        switch (menu()){
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.show();
            break;
        case 4:
            exit(1);
        default:
            cout<<"Invalid Choice!";
        }
    }
}