#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"Kya bhai Tu"<<endl;
    }
};
class D{
    public:
    void funcD(){
        cout<<"Kya hai tera natak"<<endl;
    }
};
class B:public A{

};
class C:public A,public D{

};
int main(){
    B b;
    C c;
    b.funcA();
    c.funcA();
    c.funcD();

    return 0;
}