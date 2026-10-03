/*
2. Find number of Odd and Even Elements
*/

#include<iostream>
using namespace std;
int main(void){
    int n,e=0,o=0;
    cout<<"Enter the number of inputs: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            e++;
        }
        else{
            o++;
        }    }
    cout<<"Even Elements = "<<e<<" | Odd Elements = "<<o;
}