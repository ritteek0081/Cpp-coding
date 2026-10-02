/*
1. Read and Display an Array
*/

#include<iostream>
using namespace std;
int main(void){
    int n;
    cout<<"Enter the number of inputs: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
}