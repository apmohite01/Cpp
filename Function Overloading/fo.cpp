#include<iostream>
using namespace std;
//Function Overloading in CPP
int add(int a,int b){            //1
    return a+b;
}
int add(int a,int b,int c){      //2
    return a+b+c;
}
double add(double a,double b){   //3
    return a+b;
}
double add(int a,double b){      //4
    return a+b;
}
double add(double a,int b){      //5
    return a+b;
}
int main(){
    cout<<add(3,4)<<endl;       //1
    cout<<add(3.4,6)<<endl;     //5
    cout<<add(6.5,7.5)<<endl;   //3
    cout<<add(3,4,5)<<endl;     //2
    cout<<add(4,5.5);           //4

     return 0;

}