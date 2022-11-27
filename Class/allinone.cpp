#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int roll;
    bool gender;

    //default constructor
    student(){
        cout<<"Default Constructor called"<<endl;
    }
    

    //parameterized constructor
    student(string s,int r,int b){
        name=s;
        roll=r;
        gender=b;
    }

    //copy constructor

    //destructor
    ~student(){
        cout<<"Destructor called"<<endl;
    }
    //print function for object
    void print(){
        cout<<name<<endl;
        cout<<roll<<endl;
        cout<<gender<<endl;
    }


};

int main(){
    student A('ojas',20,0);
    A.print();

    return 0;
}