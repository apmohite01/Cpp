#include<iostream>
using namespace std;

int main(){
    int n;
    int a[5];
    int b[5];
    for(int i=0;i<5;i++){
        cin>>a[i];

    }
    for(int i=0;i<5;i++){
        cin>>b[i];

    }
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a[i]<<',';
        cout<<a[(i+n)/2]<<",";
        cout<<a[i+1]<<",";
        cout<<a[n-1]<<",";
        cout<<a[n-2];
        break;
    }
    return 0;

}