/*
Convert Seconds
Input total seconds and convert them into hours, minutes, and seconds.
*/
#include<iostream>
using namespace std;
int main(void){
    int s,m,h;
    cout<<"Enter the sec: ";
    cin>>s;
    h=(s/3600)*3600;
    m=((s-h)/60)*60;
    s=s-h-m;
    cout<<"Hour :"<<h/3600<<" Minutes :"<<m/60<< " seconds :"<<s;
}