#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct item{
    float pt,wt;
};

bool compare(item x,item y){
    return (x.pt/x.wt)>(y.pt/y.wt);
}

void frac(item bag[],int n,int bagsize){


    sort(bag,bag+n,compare);

    float total=0;
    float temp;
    for(int i=0;i<n;i++){
        if(bag[i].wt<bagsize){
            total=total+bag[i].pt;
            bagsize=bagsize-bag[i].wt;
        }
        else{
            temp=(bag[i].pt/bag[i].wt)*bagsize;
            total=total+temp;
            break;
        }
    }
    cout<<"Total Profit is: "<<total<<endl;
}
int main(){

    int n; cin>>n;
    float size;
    cin>>size;
    item bag[100];

    for(int i=0;i<n;i++){
        cin>>bag[i].pt>>bag[i].wt;
    }

    frac(bag,n,size);

    return 0;

}