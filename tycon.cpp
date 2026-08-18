/*
Integer to Decimal
Input an integer and explicitly convert it to a floating-point value.
*/

#include<iostream>
using namespace std;

int main(void){
    int n;
    char a;
    cout<<"Enter the ASCII value: ";
    cin>>n;
    a=static_cast<char>(n);
    cout<<"char for ASCII value: "<<a<<endl;
    cout<<"Enter the char: ";
    cin>>a;
    n=static_cast<int>(a);
    cout<<"char for ASCII value: "<<n;
}