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
    
    int key;
    cout<<"Enter value of key:";
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"The position of key is "<<i<<endl;
        }
        

        
        

    }
    

    return 0;
}