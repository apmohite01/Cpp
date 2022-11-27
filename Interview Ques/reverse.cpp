#include<iostream>
using namespace std;
int reverse(int n){
    int temp,rev=0;
    while(n!=0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    return rev;
}
int main(){
    int num;
    cin>>num;
    cout<<"Reverse of the number is "<<reverse(num);
    return 0;
}