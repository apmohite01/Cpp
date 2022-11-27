#include<iostream>
using namespace std;

class complex{
private:
    int real,img;

public:
    complex(){
        real=0;
        img=0;
    }
    complex(int r,int i){
        real=r;
        img=i;
    }
    //operator overloading code
    complex operator +(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    void print(){
        cout<<real<<'+'<<img<<'i';
    }
};

int main(){
    complex c1(3,4);
    complex c2(5,6);
    complex c3=c1+c2;

    c3.print();

    return 0;
}