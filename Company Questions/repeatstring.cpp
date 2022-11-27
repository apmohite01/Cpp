#include<iostream>
#include<string>
using namespace std;
// apaashiijt
int main(){
    string n;
    cin>>n;
    int l=n.length();
    cout<<n[0];
    string emp="";

    for(int i=0;i<l-1;i++){
        
        if(n[i]!=n[i+1]){
            emp=emp+n[i+1];
        }

        
    }
    cout<<emp;
    return 0;
}