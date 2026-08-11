/*
Profit or Loss Percentage:
Input cost price and selling price. Calculate the profit/loss percentage.
*/
#include<iostream>
using namespace std;
int main(void){
    float a,b;
    cout<<"Enter sell and cost amount:";
    cin>>a>>b;
    if(a-b>=0){
        cout<<"profit = +"<<((a-b)/b)*100<<" %";
    }
    else{
        cout<<"loss = -"<<((b-a)/b)*100<<" %";
    }
}