#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    int arr[n];
    


    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int t;
    cout<<"Enter target:";
    cin>>t;
    for(int i=0;i<n;i++){
        if(arr[i]+arr[i+1]==t){
            cout<<"Elements are "<<arr[i]<<" and "<<arr[i+1];
        }
        continue;
    }

    return 0;

}