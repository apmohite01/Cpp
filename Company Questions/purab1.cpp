#include<iostream>
#include<string>
using namespace std;
// Akshat Singh => A. Singh
int main(){

    string S;
    S="Akshat Kumar Singh";
    cout<<S[0]<<". ";
    for(int i=1;i<S.length();i++){
        if(S[i]==' '){
            for(int j=i+1;j<S.length();j++){
                
                if(S[j+1]==' '){
                    cout<<S[i+1]<<". ";
                    for(int k=j+2;k<S.length();k++){
                        cout<<S[k];
                    }
                    break;
                }
            }
            
        }
    }
    return 0;
    
}

