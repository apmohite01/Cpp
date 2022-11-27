#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is non-prime."<<endl;
            break;
        
        }
        cout<<n<<" is prime."<<endl;
        break;
    }
    return 0;
}