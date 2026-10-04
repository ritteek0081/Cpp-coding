/*
6. Search for an Element
*/

#include<iostream>
using namespace std;
int main(void){
    int s,se,x=-1;
    cout<<"Enter the number of inputs: ";
    cin>>s;
    int a[s];
    cout<<"Enter the elements:\n";
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    cout<<"Enter the number of find: ";
    cin>>se;
    for(int i=0;i<s;i++){
        if(se==a[i]){
            x=i;
            break;
        }
    }
    if(x==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Index of the number in array: "<<x;
    }
}