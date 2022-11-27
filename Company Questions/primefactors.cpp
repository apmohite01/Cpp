#include<iostream>
#include<vector>
using namespace std;

bool prime(int n){
    if(n==2){
        return true;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;

        }

    }
    return true;

}
int main(){
    int n; cin>>n;
    vector<int>p;

    for(int i=1;i<n;i++){
        if(n%i==0){
            p.push_back(i);
        }
    }
    int l=p.size();
    for(int i=0;i<l;i++){
        if(prime(p[i])){
            cout<<p[i]<<" ";
        }
    }
    return 0;


}