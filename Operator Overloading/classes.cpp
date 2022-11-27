#include<bits/stdc++.h>
#include<iostream>

using namespace std;
class complex1{
    private:
        int real,img;

    public:

    complex1(){
        real=0;
        img=0;
    }
    complex1(int r,int i){
        real=r;
        img=i;

    }
    complex1 operator -(complex1 c){
        complex1 temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
    void print(){
        
        cout<<real;
        if(img>0){
            cout<<'+';
        }
        cout<<img<<'i';
    }

        
};
int main(){
    complex1 c1(3,7);
    complex1 c2(4,6);
    complex1 c3=c1-c2;
    c3.print();


    return 0;

}