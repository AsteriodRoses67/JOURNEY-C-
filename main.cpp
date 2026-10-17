#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char op;

    cout<<"<<<<<WELCOME TO MODERN CALCULATOR>>>>>"<<endl;

    
    while(true){
        cout<<"ENTER THE EQUATION YOU WANT TO SOLVE ==== ";
        cin>>a>>op>>b;
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
            if(b!=0){
                cout<<"DIVISION==="<<a/b<<endl;
            }else{
                cout<<"B SHOULD NOT BE EQUAL TO ZERO(0)"<<endl;
            }  
            break;
        case('%'):
            if(b!=0){
                cout<<"REMINDER==="<<a%b<<endl;
            }else{
                cout<<"B SHOULD NOT BE EQUAL TO ZERO(0)"<<endl;
            }  
            break;
        default:
            cout<<"INVALID OPERATOR "<<endl;   
            break;
        }
    }
    return 0;
}