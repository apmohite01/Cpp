#include<iostream>
using namespace std;

int main(){

    int bag;
    cout<<"Enter the weight of bag:";
    cin>>bag;

    int v1,v2,v3;
    cout<<"Enter the value of bags:";
    cin>>v1>>v2>>v3;

    int w1,w2,w3;
    cout<<"Enter the weight of bags in descending order:";
    cin>>w1>>w2>>w3;
    if(w1<bag){
        bag=bag-w1;

        if(w2<bag){
            bag=bag-w2;
            int p=v1+v2;

            if(w3<bag){
                bag=bag-w3;
                int p=v1+v2+v3;
                cout<<"Profit gained is:"<<p;
            }
            else{
                float p2=v1+v2+(bag/w3)*v3;
                cout<<"Profit gained:"<<p2;
            }
        }
        else{
        float p1=v1+(bag/w2)*v2;
        cout<<"Profit gained is:"<<p1;
        }
                   


    }

    return 0;


}