#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n=str.length();
    int odd=0;
    int even=0;

    for(int i=0;i<n;i++){
        char ch=str[i] ;
        int val=ch-48;
        if((val)%2==0){
            even=even+val;
        }
        else{
            odd=odd+val;
        }
    }
    cout<<even*odd;

    return 0;

    
}