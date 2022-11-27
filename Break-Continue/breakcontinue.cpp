#include<iostream>
using namespace std;

int main() {

    int pm;
    pm=5000;



    int i;
    for(int i=0; i<=30; i++){
        if(i%2==0){
            continue;
        }
        if(pm==0){
            break;
        }

        cout<<"V can go out"<<endl;
        pm=pm-1000;
        
            

        

    }
    return 0;

    
}