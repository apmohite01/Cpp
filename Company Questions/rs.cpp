#include<iostream>
#include<string>
using namespace std;

string rs(string n,int m){
    
    int l=n.length();
    for(int i=0;i<m/2;i++){
        char str=n[i];
        n[i]=n[m-i-1];
        n[m-i-1]=str;
    
    }
    return n;

}
int main(){
    int m;cin>>m;
    string n;
    cin>>n;
    cout<<rs(n,m);

    return 0;
}
  