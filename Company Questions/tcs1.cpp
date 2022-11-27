#include<iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    int arr[N];
    int sum=0;

    for(int i=0;i<N;i++){
        cin>>arr[i];

    }
    for(int i=0;i<N;i++){
        sum=sum+arr[i]+1;
    }
    sum=sum*2+N;
    cout<<sum;


    return 0;

    

}