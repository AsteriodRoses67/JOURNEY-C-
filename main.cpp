#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;

    cout<<"<<<<<WELCOME TO MODERN CALCULATOR>>>>>"<<endl;
    
    cin>>a,op,b;

    while(1){
        cout<<"ENTER THE EQUATION YOU WANT TO SOLVE ==== ";
        
        switch(op){
        case('+'):
            cout<<"SUM==="<<a+b<<endl;
            break;
        case('-'):
            cout<<"SUBTRACTION==="<<a-b<<endl;
            break;
        case('*'):
            cout<<"MULTIPLICATION==="<<a*b<<endl;
            break;
        case('/'):
            cout<<"DIVISION==="<<a/b<<endl;
            cout<<"REMINDER==="<<a%b<<endl;
            break;
        default:
            cout<<"ANSWER==="<<a+b<<endl;
            break;
    }
    return 0;
}