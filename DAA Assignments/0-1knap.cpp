#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct item{
    float profit,wt;


};
bool comp(item x,item y){
    return (x.profit /x.wt) > (y.profit/y.wt);
}

void frac(item items[], int n,int bagsize){


    sort(items,items+n, comp);

    float ans=0;

    for (int i = 0; i < n; i++)
    {
        if(items[i].wt<=bagsize){

            ans= ans + items[i].profit;
            bagsize=bagsize-items[i].wt; 
        }
    }

    cout<<" profit: "<<ans<<endl;
    

}

int main(){

    int n;
    float bagsize;
    item items[100];

    cin>>n;
    cin>>bagsize;

    for(int i=0;i<n;i++){

        cin>>items[i].profit;
        cin>>items[i].wt;
    }


    frac(items,n,bagsize);

    
return 0;
}