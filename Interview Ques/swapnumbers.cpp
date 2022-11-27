#include<iostream>
using namespace std;

int main(){
    int x=20;
    int y=10;

    int sum;
    sum=x+y;

    x=sum-x;
    y=sum-y;

    cout<<"x="<<x;
    cout<<"y="<<y;

    return 0;

}