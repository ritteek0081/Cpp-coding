/*
Convert Days
Input a number of days and convert it into weeks and remaining days.
*/

#include<iostream>
using namespace std;
int main(void){
    int n,rd;
    cout<<"Enter the number of days: ";
    cin>>n;
    cout<<"Remaining days: "<<n/7<<" weeks "<<n%7<<" days";
}