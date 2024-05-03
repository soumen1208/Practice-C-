#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 1, 2, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left = 0, right = n-1, turn = 0, sereja = 0, dima = 0;

    while (left<=right)
    {
        if(turn % 2 ==0){
            
            if(arr[left] < arr[right]){
                sereja += arr[right];
                right--;
            }else{
                sereja += arr[left];
                left++;
            }

        }else{
            if(arr[left] < arr[right]){
                dima += arr[right];
                right--;
            }else{
                dima += arr[left];
                left++;
            }
        }
        turn++;
    }

    cout<<sereja << " " << dima;      

}