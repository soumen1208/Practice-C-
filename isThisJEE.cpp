// Is This JEE
// Everyone loves short problem statements.

// Given a function 
// �
// (
// �
// )
// f(x) find its minimum value over the range 
// 0
// <
// �
// <
// �
// /
// 2
// 0<x<π/2

// �
// (
// �
// )
// =
// (
// �
// 2
// +
// �
// ∗
// �
// +
// �
// )
// /
// �
// �
// �
// (
// �
// )
// f(x)=(x 
// 2
//  +b∗x+c)/sin(x)

// ###Input:

// First-line will contain 
// �
// T, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, two real numbers 
// �
// ,
// �
// b,c.
// ###Output: For each test case, output the minimum value of 
// �
// (
// �
// )
// f(x) over the given range. Absolute error of 
// 1
// 0
// −
// 6
// 10 
// −6
//   is allowed.

// ###Constraints

// 1
// ≤
// �
// ≤
// 100000
// 1≤T≤100000
// 1
// ≤
// �
// ,
// �
// ≤
// 20
// 1≤b,c≤20
// ###Sample Input: 1 2 2

// ###Sample Output: 5.8831725615

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

double f(double b, double c, double x){

    double ans = x*x+b*x+c;
    double ans1 = ans/sin(x);
    return ans1;
}

int main(){
    int n; cin>>n;

    for(int i = 0; i < n; i++){
        double b, c;
        cin>>b>>c;
        double left = 0.000001;
        double PI = 3.14159265359;
        double right = PI/2;

        while (right - left > 0.000001)
        {
            double mid1 = left + (right - left)/3;
            double mid2 = right - (right - left)/3;

            if(f(b,c,mid1) > f(b,c,mid2)){
                left = mid1;
            }else if(f(b,c,mid1) < f(b,c,mid2)){
                right = mid2;
            }else{
                left = mid1;
                right = mid2;
            }
        }
         
        cout<<fixed<<setprecision(7)<<f(b,c,right);
    }
}