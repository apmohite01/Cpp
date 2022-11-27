#include<iostream>
using namespace std;


int func(int a,int b){
    
    int p= a+b;
    
    return p  ;
}

int main(){
    int (*myptr) (int,int);

    myptr=func;

    cout<< myptr(3,6);
    return 0;
}