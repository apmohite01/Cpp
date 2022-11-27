#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"Aur bhai"<<endl;
    }
};
class B{
    public:
    void funcB(){
        cout<<"Kya Haal"<<endl;
    }
};
class C:public A,public B{

};
int main(){

    C c;
    c.funcA();
    c.funcB();

    return 0;

}