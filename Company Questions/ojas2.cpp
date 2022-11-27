#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    int p;
    cin>>p;
    int d[50];
    for(int i=0;i<n;i++){
        arr[i]=5000*(i+1);
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<50;j++){
            d[j]=arr[i]+d[j-1]+5000+i;
            if(d[j]==p){
                continue;
            
            }
            
        }
        cout<<i;
        break;
        
        
    }
    return 0;

}