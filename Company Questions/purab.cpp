#include<iostream>
#include<string>
using namespace std;
int loveSeventeen(string S){
    int e=0;
    for(int i=0;i<S.length()-1;i++){
        if(S[i]=='9' ) {
            e++;
        }
        
    }
    int result=S.length()-2*e;

    return result;
}
int main(){
    string S;
    cin>>S;
    int result;
    result=loveSeventeen(S);
    cout<<result;
    return 0;
}