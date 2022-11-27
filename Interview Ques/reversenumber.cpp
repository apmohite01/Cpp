#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int temp,rev=0;
    while(n!=0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    cout<<"Reversed Number is "<<rev;

}