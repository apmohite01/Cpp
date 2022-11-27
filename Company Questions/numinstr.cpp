#include<iostream>
#include<string>
using namespace std;

int main(){
    string n;
    cin>>n;
    int l=n.length();
    char arr[10]={'0','1','2','3'};
    for(int i=0;i<l;i++){
        for(int j=0;j<10;j++){
            if(n[i]==arr[j]){
                cout<<n[i];
            }
        }
    }
    return 0;
}