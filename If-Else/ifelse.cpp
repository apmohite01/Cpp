#include<iostream>
using namespace std;

int main() {

    int savings;
    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Long drive with VK"<<endl;
        }
        else{
            cout<<"Dinner with VK"<<endl;
        }
        
    }
    else if(savings<2000){
        cout<<"No_one"<<endl;
    }
    else{
        cout<<"Friends"<<endl;
    }

    return 0;
    
}