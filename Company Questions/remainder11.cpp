#include<iostream>
#include<string>
#include<math.h>
using namespace std;
//code for string length below 1000
int main(){

    string n;
    cin>>n;
    int x=n.length();
    int m;
    
    m=x%11;
    
    if(x<1000){
        cout<<m;
        
    }
    else{
        cout<<"String length above 1000";
    }
    return 0;
    
}