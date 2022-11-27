#include<iostream>
using namespace std;

int main(){

    
    int n;
    cin>>n;
    int f=0;
    int s=1;
    int next;
    cout<<f<<endl;
    cout<<s<<endl;

    for(int i=0;i<n-2;i++){
        
        next=f+s;
        cout<<next<<endl;
        f=s;
        s=next;
        

    }
    

    return 0;
}
