#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }

    int sereja = 0, dima = 0; 
    int left = 0; 
    int right = n-1;
    int turn = 0;

    while(left<=right){
        if(turn % 2 == 0){ // sereja has contain even nuber.
            if(arr[left] > arr[right]){  // only gretter number of both side are add in 1st sereja's and 2nd dima's side.
               sereja += arr[left]; 
               left++;
            }else{
                sereja += arr[right];
                right--;
            }
        }else{  // dima has contain odd number
            if(arr[left] > arr[right]){
               dima += arr[left];
               left++; 
            }else{
                dima += arr[right];
                right--;
            }
        }

        turn++;
    }

    cout<<sereja<<" "<<dima<<endl;

}