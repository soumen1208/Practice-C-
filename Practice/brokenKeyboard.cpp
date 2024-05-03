#include<iostream>
#include<set>
using namespace std;



int main(){
    int n; cin>>n;

    while (n--)
    {
        /* code */
        string s;
        cin>>s;
        set<char>st;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == s[i+1]){
                i++;
            }else{
                st.insert(s[i]);
            }
        }

        for(auto at:st){
            cout<<at;
        }

        cout<<endl;

    }
    
}