#include<iostream>
using namespace std;

int main(){

    
    int n;
    cin>>n;
    int f=0;
    int s=1;
    int next;
    

    for(int i=0;i<n-2;i++){
        
        next=f+s;
        f=s;
        s=next;
        

    }
    cout<<"Fibonacci value is "<<next;
    

    return 0;
}