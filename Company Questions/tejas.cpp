#include<iostream>
using namespace std;

int workleft(int work, int f1, int f2, int d1,int d2){

    int w1=f1*d1;
    int w2=f2*d2;

    int wl=work-(w1+w2);

    return wl;

}

int main(){
    int work,f1,d1,f2,d2;

    cin>>work>>f1>>d1>>f2>>d2;

    cout<<workleft(work,f1,d1,f2,d2);

    return 0;
}