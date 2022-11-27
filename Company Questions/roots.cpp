#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;

    float D=b*b-4*a*c;

    float den=2*a;
    float num1=-b+sqrt(D);
    float num2=-b-sqrt(D);

    float x1=num1/den;
    float x2=num2/den;

    cout<<"The roots of equation are "<<x1<<" and "<<x2;

    return 0;
}

