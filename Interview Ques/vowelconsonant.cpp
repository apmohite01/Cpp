#include<iostream>
#include<string>
using namespace std;

int main(){
    string n;
    cin>>n;
    int l=n.length();
    string vowels="";
    string consonants="";
    
    for(int i=0;i<l;i++){
        if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' ){
            vowels+=n[i];

        }
        else{
            consonants+=n[i];
        }
        
    }
    cout<<"Vowels are "<<vowels<<endl;
    cout<<"Consonants are "<<consonants<<endl;
    return 0;
}