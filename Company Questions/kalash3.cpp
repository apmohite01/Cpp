#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int found=-1;
    for(int i=n-1;i>=0;i--){
        if(m==arr[i]){
            cout<<i+1;
            found=1;
            break;
        }
        

    }
    if(found==-1){
        cout<<found;
    }
    
    
    return 0;

}