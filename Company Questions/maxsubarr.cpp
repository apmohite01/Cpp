#include<iostream>
#include<string>
using namespace std;


int maxSubarray(int arr[],int n){
    //code here
    // 1 2 3 4

    int fin=0;
    int curr; 
    int x=-1,y=-1;
    for(int i=0;i<n-1;i++){
        curr=0;
        for(int j=i;j<n;j++){
            curr+=arr[j];

            if(curr>fin){
                fin=curr;
                x=i;
                y=j;
            }
            //cout<<arr[j]<<" ";
        }
        //cout<<endl;
    }

//cout<<x<<" "<<y<<" ";
cout<<endl;
cout<<"[ "; 
for(int i=x;i<=y;i++){
    cout<< arr[i]<<" ";
}
cout<<" ]"<<endl;
return fin;


}
int main(){
    
    int n= 5;
    int arr[]={ 1,2,-5,3,4};
    cout<<maxSubarray(arr,n);


return 0;
}