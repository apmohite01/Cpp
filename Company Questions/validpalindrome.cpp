#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    string k="";
    int n=s.length();
    for(int i=n-1;i>=0;i--){
        k=k+s[i];
    }
    if(k==s){
        cout<<true;
    }
    else{
        cout<<false;
    }

    return 0;
}