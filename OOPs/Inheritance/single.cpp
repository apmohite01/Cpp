#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void funcA(){
        cout<<"Hey A"<<endl;
    }
};
class B: public A{
    
};

int main(){
    B b;
    b.funcA();

    return 0;
}