#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>digits){
    vector<int>p;
    int c=0;
    stack<int>st;
    int m=digits.size();

    if(digits[m-1]<9){
        digits[m-1]+=1;
        return digits;
    }
    else{
        c=1;
        for(int i=m-1;i>=0;i--){
            if(digits[i]+c>9){
                st.push(0);
                c=1;
            }
            else{
                st.push(digits[i]+c);
                c=0;
            }
        }
        if(c==1){
            st.push(c);
        }

        while(!st.empty()){
            p.push_back(st.top());
            st.pop();
        }

        return p;
    }

}
int main(){
    
    vector<int>arr;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    //cout<<plusOne(arr);

    return 0;
}