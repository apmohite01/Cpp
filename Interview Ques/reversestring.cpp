#include<iostream>
#include<string>
using namespace std;

int main(){

    string n;
    cin>>n;

    int l=n.length();
    for(int i=0;i<l/2;i++){
        swap(n[i],n[l-i-1]);
    }
    cout<<n;
}