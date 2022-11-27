#include<iostream>
using namespace std;

int main(){

    float a,b;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;

    char op;
    cout<<"Enter the operand"<<endl;
    cin>>op;

    switch(op){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"Enter another operand"<<endl;
        break;
    }
    return 0;



}