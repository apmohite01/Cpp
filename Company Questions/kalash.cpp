#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int num;
    cin>>num;
    string uc="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i=0;i<uc.length();i++){
        if(str[0]==uc[i]){
            cout<<uc[(i+num)%26];
        }
    }
    string ls="abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<str.length();i++){
        for(int j=0;j<ls.length();j++){
            if(str[i]==ls[j]){
                cout<<ls[(j+num)%26];
            }
        }
    }

    return 0;

}