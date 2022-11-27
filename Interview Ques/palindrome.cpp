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

    int n;
    cin>>n;
    if(n==reverse(n)){
        cout<<"The number is Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}