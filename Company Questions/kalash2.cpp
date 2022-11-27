#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(int N,int K){
    if(N>=(K*(K+1))/2){
        return true;
    }
    return false;
}
int goodIntegers(int N,int K){
    int c=0;
    for(int i=1;i<=N;i++){
        if(fun(i,K)){
            c=c+1;
        }
    }
    return c;

}
int main(){
    int N,K;
    cin>>N>>K;
    cout<<goodIntegers(N,K);
    return 0;
}