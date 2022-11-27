#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cin>>n;
    int p;
    cin>>p;
    int d[50];
    for(int i=0;i<n;i++){
        arr[i]=5000*(i+1);
    }
    for(int i=1;i<50;i++){
        while(d[i]<p){
            d[i]=d[i-1]+5000+i;
        }
        cout<<i;
        break;
    }
    return 0;

}