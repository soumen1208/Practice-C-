#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;


    while (n--)
    {
        /* code */
        string str;
        cin>>str;
        set<char>st;

        for(int i = 0; i < str.size(); i++){
            if(str[i] == str[i+1]){
                i++;
            }else{
                st.insert(str[i]);
            }
        }
        for(auto it:st){
            cout<<it;
        }
        cout<<endl;
    }
    
}