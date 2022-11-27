#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int num;
    for(int i=a;i<=b;i++){
        for(num=2;num<i;num++){
            if(i%num==0){
            
                break;
            }
            
        }
        if(num==i){
            cout<<i<<endl;

        }
    }
}
