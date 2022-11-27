#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"Hushhh"<<endl;   
    }
};
class B:public A{
    public:
    void funcB(){
        cout<<"Hurrr"<<endl;
    }
};
class C:public A{

};
class D:public B{

}; 
int main(){
    D d;
    C c;

    d.funcA();
    c.funcA();
    d.funcB();
    return 0;
}