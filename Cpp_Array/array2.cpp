/*
2. Find the Sum and Average of Array Elements
*/

#include<iostream>
using namespace std;
int main(void){
    int n,s=0;
    cout<<"Enter the number of inputs: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
    s=s+a[i];
    }
    cout<<"Sum = "<<s<<" | Average = "<<(float)s/n;
}