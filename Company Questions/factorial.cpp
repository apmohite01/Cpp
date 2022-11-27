#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p=1;

    for(int i=n;i>=1;i--){
        p=p*i;
    }
    cout<<"Factorial is:"<<p;

    return 0;
}