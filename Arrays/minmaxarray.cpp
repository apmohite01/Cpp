#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>maxno){
            maxno=arr[i];
        }
        if(arr[i]<minno){
            minno=arr[i];
        }
    

        
    }
    cout<<"Minimum value is "<<minno<<endl;
    cout<<"Maximum value is "<<maxno<<endl;

    return 0;
}