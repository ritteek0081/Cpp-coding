/*
7. Reverse an Array
*/

#include<iostream>
using namespace std;
int main(void){
    int s,x=0;
    cout<<"Enter the number of inputs: ";
    cin>>s;
    int a[s];
    cout<<"Enter the elements: ";
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    cout<<"Before Reversed array: ";
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<s/2;i++){
        x=a[i];
        a[i]=a[s-1-i];
        a[s-1-i]=x;
    }
    cout<<"\nAfter Reversed array: ";
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
}