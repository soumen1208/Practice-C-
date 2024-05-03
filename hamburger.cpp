#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
    string s;
    cin>>s;

    long long b1, b2, b3, p1, p2, p3;
    cin>> b1>>b2>>b3;
    cin>>p1>>p2>>p3;
    long long rl;
    cin>>rl;
    
    long long a=0, b=0,c=0;
    
    for(auto at : s){
        if( at == 'B') a++;
        else if(at == 'S') b++;
        else c++;

    }

    long long low = 0, high = rl + 200;
    
    while (low<=high)
    {
        long long mid = (low + high)/2;
        // mid denotes the number of haburger that we make
        long long z = 0;
        long long r1 = max(a*mid - b1, z);
        long long r2 = max(b*mid - b2, z);
        long long r3 = max(c*mid - b3, z);

        long long price = r1*p1 + r2*p2 + r3*p3;
        if(price<=rl) low = mid+1;
        else high = mid-1;
    }
    
    cout<<high;

    return 0;
}



// BENGALI----------------------------------------------------

