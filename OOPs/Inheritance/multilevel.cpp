#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"Thak Gaya hu Bhai"<<endl;
    }
};
class B:public A{
    public:
    void funcB(){
        cout<<"Chhaddo sab"<<endl;
    }
};
class C:public B{

};
int main(){
    C c;
    c.funcA();
    c.funcB();
    return 0;
}