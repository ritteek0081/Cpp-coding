/*
3. Find the Largest and Smallest Element
*/

#include<iostream>
using namespace std;
int main(void){
    int n,m=0;
    cout<<"Enter the number of inputs: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<s){
            s=a[i];
        }
    }
    cout<<"Max = "<<m<<" | Min = "<<s;
}