#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<' '<<b<<' ';
    int fib;
    
    for(int i=3;i<=n;i++){
        fib=a+b;
        a=b;
        b=fib;
        cout<<fib<<' ';
    }

    return 0;
}