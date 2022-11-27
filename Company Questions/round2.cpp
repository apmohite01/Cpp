#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sto[n];
    for(int i=0;i<n;i++){
        cin>>sto[i];
    }
    int res[n];

    for(int i=0;i<n-1;i++){
        if(sto[i]>sto[i+1]){
            res[i]=0;
        }
        else{
            res[i]=1;
        }
    }
    
    res[n-1]=0;
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }

    return 0;
}