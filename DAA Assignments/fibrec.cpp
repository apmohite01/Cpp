#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=0){
        return -1;
    }
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibo(n-2)+fibo(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}