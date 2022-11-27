#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[n];
    int sum=0;

    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            sum=arr[i+1]-arr[i];
            arr[i+1]=arr[i];
        }
        else{
            continue;;
        }
    }
    cout<<sum;

    return 0;
}